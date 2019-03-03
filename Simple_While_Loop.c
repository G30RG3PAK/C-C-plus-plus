#include<stdio.h>
int main()
{
	int i;
	printf("Enter an number to run the loop:");
	scanf("%d",&i);

	while(i > 0)
	{
		printf("%d\n",i);
		i--;
	}
	return 0;
}