#include <stdio.h>

typedef struct hm {
    int horas;
    int minutos;
} t_hm;

t_hm converterMinutosParaHorasMinutos(int minutos) {
    t_hm resultado;
    
    // Calcula as horas e os minutos
    resultado.horas = minutos / 60;
    resultado.minutos = minutos % 60;
    
    return resultado;
}

int main() {
    int minutos;
    
    // Solicita ao usuário um número de minutos
    printf("Digite o numero de minutos: ");
    scanf("%d", &minutos);
    
    // Converte os minutos em horas e minutos usando a função
    t_hm resultado = converterMinutosParaHorasMinutos(minutos);
    
    // Exibe o resultado
    printf("%d minutos equivalem a %d horas e %d minutos.\n", minutos, resultado.horas, resultado.minutos);
    
    return 0;
}
