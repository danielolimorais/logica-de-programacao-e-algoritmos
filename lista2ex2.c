#include<stdio.h>
int main(){
float a;
scanf("%f", &a);
if(a<0){
    printf("%d", (int)(a*-1));
}else
    printf("%d", (int)a);
}