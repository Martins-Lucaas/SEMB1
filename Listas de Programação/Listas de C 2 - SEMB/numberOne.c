# include <stdio.h>

int main()
{
    printf("%d\n", (8>9) && (10!=2));
    printf("%d\n", (14 > 100) || (2>1));
    printf("%d\n", ( !(14>100) && !(1>2) ) );
    
    return 0;
}