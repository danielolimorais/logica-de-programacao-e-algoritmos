#include<stdio.h>
int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    if (a>=b){
        printf("%f", a-b);
    }else{
        printf("%f", b-a);
    }
}