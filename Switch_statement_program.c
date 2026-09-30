#include<stdio.h>
int main(){
    int a,b, result;
    char op;
    printf("enter two operand:");
    scanf("%d %d",&a,&b);
    printf("enter any operator(+,-,*,/):");
    scanf(" %c",&op);
    switch(op){
 case '+':
        result=a+b;
        printf("result=%d",result);
        break;

 case '-':
        result=a-b;
        printf("result=%d",result);
        break;
         case '*':
        result=a*b;
        printf("result=%d",result);
        break;
 case '/':
 if(b!=0){
        result=a/b;
        printf("result=%d",result);
 }
 case '%':
        result=a%b;
        printf("result=%d",result);
        break;
    }
    return 0;
}
