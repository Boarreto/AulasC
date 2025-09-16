#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VEICULOS 100  // Limite máximo de veículos no dia

typedef struct {
    char placa[20];
    int entradaHora, entradaMin;
    int saidaHora, saidaMin;
    int tempoTotal;    // tempo decorrido em minutos
    int tempoHoras;    // parte inteira das horas
    int tempoMin;      // minutos restantes
    float valor;       // valor a ser pago pelo cliente
} Veiculo;

int main(void) {
    float valorHora;
    char data[20];
    int i;

    // Leitura dos parâmetros iniciais
    printf("Digite o valor da hora do estacionamento: ");
    scanf("%f", &valorHora);
    
    printf("Digite a data do dia (ex: dd/mm/aaaa): ");
    scanf("%s", data);

    Veiculo veiculos[MAX_VEICULOS];
    int contVeiculos = 0;
    float totalArrecadado = 0.0;
    char placa[20];

    printf("\n--- Controle de estacionamento ---\n");

    // Loop para processamento de veículos
    while (1) {
        printf("\nDigite a placa do veIculo (ou 'FIM' para encerrar o dia): ");
        scanf("%s", placa);
        
        // Verifica se o usuário deseja encerrar o dia
        if (strcmp(placa, "FIM") == 0 || strcmp(placa, "fim") == 0) {
            break;
        }
        
        // Armazena os dados do veículo no vetor
        strcpy(veiculos[contVeiculos].placa, placa);
        
        // Leitura do horário de entrada
        printf("Digite o horario de ENTRADA (HH MM): ");
        scanf("%d %d", &veiculos[contVeiculos].entradaHora, &veiculos[contVeiculos].entradaMin);
        
        // Leitura do horário de saída
        printf("Digite o horario de SAIDA (HH MM): ");
        scanf("%d %d", &veiculos[contVeiculos].saidaHora, &veiculos[contVeiculos].saidaMin);
        
        // Calcula o tempo total decorrido (em minutos)
        int totalEntrada = veiculos[contVeiculos].entradaHora * 60 + veiculos[contVeiculos].entradaMin;
        int totalSaida   = veiculos[contVeiculos].saidaHora * 60 + veiculos[contVeiculos].saidaMin;
        int diff = totalSaida - totalEntrada;
        
        // Caso o horário de saída seja anterior ao de entrada, pode haver erro,
        // ou interpretar-se que o veículo ficou estacionado após a meia-noite.
        if (diff < 0) {
            printf("Erro: Horario de saida menor que horario de entrada. Verifique os dados.\n");
            continue;
        }
        
        veiculos[contVeiculos].tempoTotal = diff;
        veiculos[contVeiculos].tempoHoras = diff / 60;
        veiculos[contVeiculos].tempoMin = diff % 60;
        
        // Calcula o valor a pagar (proporcional ao tempo utilizado)
        veiculos[contVeiculos].valor = valorHora * ((float)diff / 60.0);
        totalArrecadado += veiculos[contVeiculos].valor;
        
        // Imprime o recibo do veículo
        printf("\n----- Recibo -----\n");
        printf("Placa            : %s\n", veiculos[contVeiculos].placa);
        printf("Horário de Entrada: %02d:%02d\n", veiculos[contVeiculos].entradaHora, veiculos[contVeiculos].entradaMin);
        printf("Horário de Saída  : %02d:%02d\n", veiculos[contVeiculos].saidaHora, veiculos[contVeiculos].saidaMin);
        printf("Tempo decorrido   : %d minutos (%dh %dmin)\n", 
               veiculos[contVeiculos].tempoTotal, 
               veiculos[contVeiculos].tempoHoras, 
               veiculos[contVeiculos].tempoMin);
        printf("Valor a pagar     : R$ %.2f\n", veiculos[contVeiculos].valor);
        printf("------------------\n");
        
        contVeiculos++;
        if (contVeiculos >= MAX_VEICULOS) {
            printf("Limite maximo de veiculos atingido.\n");
            break;
        }
    }  // fim do loop de veículos

    // Impressão do relatório final no arquivo .txt
    FILE *fp = fopen("relatorio.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo para gravar o relatorio.\n");
        return 1;
    }
  
    fprintf(fp, "Relatorio do dia: %s\n", data);
    fprintf(fp, "Valor da hora do estacionamento: R$ %.2f\n", valorHora);
    fprintf(fp, "--------------------------\n");
    
    for ( i = 0; i < contVeiculos; i++) {
        fprintf(fp, "Veiculo %d:\n", i + 1);
        fprintf(fp, "   Placa            : %s\n", veiculos[i].placa);
        fprintf(fp, "   Horário de Entrada: %02d:%02d\n", veiculos[i].entradaHora, veiculos[i].entradaMin);
        fprintf(fp, "   Horário de Saida  : %02d:%02d\n", veiculos[i].saidaHora, veiculos[i].saidaMin);
        fprintf(fp, "   Tempo decorrido   : %d minutos (%dh %dmin)\n", 
                veiculos[i].tempoTotal, 
                veiculos[i].tempoHoras, 
                veiculos[i].tempoMin);
        fprintf(fp, "   Valor cobrado     : R$ %.2f\n", veiculos[i].valor);
        fprintf(fp, "--------------------------\n");
    }
    fprintf(fp, "Total arrecadado: R$ %.2f\n", totalArrecadado);
    fclose(fp);

    printf("\nEncerramento do dia efetuado. Relatorio gerado no arquivo 'relatorio.txt'.\n");
    printf("Atencao!! salvar o arquivo exportado no final do dia e alterar o nome, se nao sera sobrescrito.");
    return 0;
}

