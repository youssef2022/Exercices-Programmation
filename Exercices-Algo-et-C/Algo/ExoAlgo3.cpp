#include<stdio.h>
#include<cstdlib>
int main()
{
	int h,i,j,b,x,sb,p,s;
    printf("Donner l'heure:");
    scanf("%d",&h);
    printf("Donner les jours:");
    scanf("%d",&j);
    printf("Donner les benefices:");
    scanf("%d",&b);
    printf("Donner les pourcentages:");
    scanf("%d",&x);
    sb = i*h*j;
    p = (x*b)/100;
    s = sb+p;
	printf("Le salaire menseuel du salarie est de : %d.",s);
    printf("\n");
    ssytem("PAUSE");
	return 0;
}
