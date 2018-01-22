#include<stdio.h>
#include<cstdlib>
int main()
{
	int h,m,s,res;
    printf("Donner l'heure:");
    scanf("%d",&h);
    printf("Donner les minutes:");
    scanf("%d",&m);
    printf("Donner les secondes:");
    scanf("%d",&s);
    res = (h*3600)+(m*60)+s;
    printf("La conversion de vos heures,minutes,secondes en secondes est de : %d.",res);
    printf("\n");
    system("PAUSE");
	return 0;
}
