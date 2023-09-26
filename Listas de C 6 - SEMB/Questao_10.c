# include <stdio.h>

typedef struct{
int x, y;
char c;

} t_ponto;

int main(){

    printf("%d bytes\n", sizeof(t_ponto));
    return 0;
}

/*A saída do código depende da arquitetura do sistema em que você está compilando. 
Em sistemas de 32 bits, é provável que a saída seja "12 bytes" porque a estrutura 
`t_ponto` possui dois inteiros (4 bytes cada) e um caractere (1 byte). No entanto, 
os compiladores frequentemente adicionam espaço de preenchimento para alinhamento 
de memória, tornando o tamanho total 12 bytes. Em sistemas de 64 bits, o tamanho 
pode ser 16 bytes devido ao alinhamento de memória. O tamanho exato depende do sistema 
e do compilador específicos que você está usando. No caso do meu sistema o resultado foi 12 bytes*/