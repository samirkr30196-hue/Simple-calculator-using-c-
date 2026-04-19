#include<stdio.h>
int main(){
     char operator;
     double a,b;
     printf("Enter an operator(+, -, *, /): ");
     scanf("%c",& operator);
     printf("Enter two numbers: ");
     scanf("%lf %lf",&a,&b);
     switch(operator){
        case '+':
           printf("%.2lf+%.2lf=%.2lf",a,b,a+b);
           break;
        case '-':
           printf("%.2lf-%.2lf=%.2lf",a,b,a-b);
           break;
        case '*':
             printf("%.2lfx%.2lf=%.2lf",a,b,a*b);
             break;
        case '/':
            if(b!=0)
                printf("%.2lf/%.2lf=%.2lf",a,b,a/b);
            else
                printf("Division by zero not possible");
            break;
        default:
               printf("Invalid operator\n");
      }

    return 0;
}