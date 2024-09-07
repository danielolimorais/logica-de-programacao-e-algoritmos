#include <stdio.h> 
int main() 
{ 
int a, b, op; 
printf("Escolha dois numeros"); 
scanf("%d" "%d", &a, &b); 
printf("Escolha a operacao de 1 a 4, sendo 1 a soma, 2 subtracao, 3 multiplicacao e 4 divisao"); 
scanf("%d", &op); 
if (a || b == 0){ 
} 
switch(op){ 
case 1: 
printf("%d", a+b); 
break; 
case 2: 
printf("%d", a-b); 
break; 
case 3: 
printf("%d", a*b); 
break; 
case 4: 
if(a==0 || b==0){ 
    printf("You cant divide by 0"); 
}else{ 
    printf("%d", (float)a/b); 
}
break; 
default: 
printf("Escolha de 1 a 4 as operacoes"); 
} 
return 0; 
} 