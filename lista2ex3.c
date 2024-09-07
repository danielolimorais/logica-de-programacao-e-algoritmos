#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    if (a+b<c){
        printf("Its not a triangle");
    }else if (a>b+c){
        printf("Its not a triangle");
        }else{
            printf("Its a triangle");
        }
    
}