#include <stdio.h>
 
int main() 
{
    int tab[100],min,taille,pos=1,j,c;
 
    printf("Donnez le nombre d'elements du tableau'\n");
    scanf("%d",&taille);
 
    printf("Enter %d eniiers\n",taille);
 
    for (c=0 ; c<taille; c++ ){
		
		printf("Element %d : ",c+1);
        scanf("%d", &taille[c]);
 	}
 	
    min = tab[0];
 
    for ( j=1 ; j<taille ; j++ ) 
    {
        if ( tab[j] < min ) 
        {
           min = tab[c];
           pos = c+1;
        }
    } 
 
    printf("Le plus petit element est a la position %d , savaleur est %d.\n", pos, min);
    return 0;
}

