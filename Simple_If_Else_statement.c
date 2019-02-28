#include<stdio.h>
int main()
{
    int i;
    printf("Enter the the interger :");
    scanf("%d",&i);
    if (i > 0)
    {
        printf("This input is positive.\n");
    }
    else if(i < 0)
    {
        printf("This input is negative.\n");    
    }
    else
    {
        printf("This input is Zero.\n");
    }
    return 0;
    

}