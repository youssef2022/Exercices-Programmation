#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nb;
	printf("Saisir un nombre a tester :");
	scanf("%d",&nb);
	if(nb%2==0)
	{
		printf("Ce nombre est pair");	
	}	
	else
	{
		printf("Ce nombre est impair");
	}
	printf("\n");
	system("Pause");
	return 0;
}
