#include <stdio.h>
int main(){
     int a, b;
    printf("Digite dois numeros");
    scanf("%d %d", &a,&b);
    printf("O resto da divisao e %d\n", a%b);
    printf("O quociente e %d\n", a/b);
    return 0;
}