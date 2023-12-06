# include <stdio.h>
int main(){
    int i, n;

    scanf("%d", &n);
    i=1;
    do{
        printf("%d\n",i);
        i = i+1;
    } while(i <= n);
}