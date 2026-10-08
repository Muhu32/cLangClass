#include <stdio.h>
int main(){
    int a,b; char c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &c);

    if(c == '+') printf("Result: %d", a + b);
    else if(c == '-') printf("Result: %d\n", a - b);
    else if(c == '*') printf("Result: %d\n", a * b);
    else if(c == '/') printf("Result: %d\n", a / b);
    else if(c == '%') printf("Result: %d\n", a % b);
    else printf("Invalid operator\n");

    return 0;
}