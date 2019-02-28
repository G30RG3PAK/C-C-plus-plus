#include<stdio.h>
int main()
{
    float num1,num2;
    char op;
    printf("Enter an operator : \n");
    scanf("%c", &op);

    printf("Enter first operands: \n");
    scanf("%f", &num1);

    printf("Enter second operands: \n");
    scanf("%f", &num2);

    switch (op)
    {
        case '+':
        printf("%f + %f = %f\n",num1, num2, num1+num2);
        break;
    
        case '-':
        printf("%f - %f = %f\n",num1, num2, num1-num2);
        break;

        case '*':
        printf("%f * %f = %f\n",num1, num2, num1*num2);
        break;

        case '/':
        printf("%f / %f = %f\n",num1, num2, num1/num2);
        break;
        default:
            printf("Error! Input's operator is not correct\n");
            break;
    }
    return 0;
}