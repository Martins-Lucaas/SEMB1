void swap(int *i, int *j) {
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

/*O erro no código original estava na falta de alocação de memória para o ponteiro tmp. 
Para corrigir o problema, foi necessário criar uma variável tmp do tipo inteiro para armazenar 
temporariamente o valor apontado por i antes de realizar a troca correta dos valores entre i e j. 
O código corrigido ficou assim*/