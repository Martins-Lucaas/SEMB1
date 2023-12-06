#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int diasNoMes(int mes, int ano) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Verifica se o ano é bissexto (fevereiro tem 29 dias)
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        diasPorMes[2] = 29;
    }

    return diasPorMes[mes];
}

int diferencaDias(struct Data data1, struct Data data2) {
    int dias = 0;

    // Calcula a diferença de anos completos
    for (int ano = data1.ano; ano < data2.ano; ano++) {
        dias += 365;
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            dias++;  // Adiciona um dia para anos bissextos
        }
    }

    // Calcula a diferença de dias no mesmo ano
    for (int mes = data1.mes; mes <= 12; mes++) {
        if (mes == data1.mes) {
            dias += diasNoMes(mes, data1.ano) - data1.dia;
        } else if (mes == data2.mes) {
            dias += data2.dia;
            break;
        } else {
            dias += diasNoMes(mes, data1.ano);
        }
    }

    return dias;
}

void calcularEImprimirDiferenca() {
    struct Data data1, data2;
    char primeiraData[11], segundaData[11];

    printf("Entre com a primeira data (dd/mm/aaaa): ");
    scanf("%s", primeiraData);

    printf("Entre com a segunda data (dd/mm/aaaa): ");
    scanf("%s", segundaData);

    sscanf(primeiraData, "%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    sscanf(segundaData, "%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    int difDias = diferencaDias(data1, data2);

    printf("Diferenca em dias: %d\n", difDias);
}

int main() {
    calcularEImprimirDiferenca();

    return 0;
}
