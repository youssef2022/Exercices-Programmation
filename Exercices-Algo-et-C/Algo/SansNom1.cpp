#include <stdio.h>

int main()
{
	int n;
	
	printf("Entrez votre nombre a tester : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\nVotre nombre est paire");
	}else{
		printf("\nVotre nombre n'est pas paire");
	}

return 0;
}
