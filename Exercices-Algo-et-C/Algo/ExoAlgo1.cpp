#include<stdio.h>
#include<cstdlib>
int main()
{
    int l1,l2,p,a;
    printf("Donner la longueur 1:");
    scanf("%d",&l1);
    printf("Donner la longueur 2:");
    scanf("%d",&l2);
    p = (l1+l2)/2;
    a = l1*l2;
    printf("La surface du rectangle est de %d.",p);
	printf("\nEt l'aire du rectangle est de %d.",a);
	printf("\n");
	system("PAUSE");
	return 0;
}
                
