#include<stdio.h>
#include<cstdlib>
int main()
{
	int rl,rt,rs,dt_l,dt,dl,a1,a2,a3;
    printf("Saisir le rayon de la lune :");
    scanf("%d",&rl);
    printf("Saisir le rayon de la terre :");
    scanf("%d",&rt);
    printf("Saisir le rayon du soleil :");
    scanf("%d",&rs);
    printf("Saisir la distance terre lune :");
    scanf("%d",&dt_l);
    dt = rt*rt;
    dl = rl*rl;
    a1 = dt*dt_l;
    a2 = dl*dt_l;
    a3 = a2-a1;
	printf("L'air de l'ombre de la Terre sur la Lune est de : %d.",a3);
	printf("\n");
	system("PAUSE");
    return 0;
}
