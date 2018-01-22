#include <stdio.h>
#include <math.h>


int main ()
{
     int N, i;
     float Ai, S1, S2, M;
     double V, Ec;

     printf ("\nEntrez le nombre de valeurs N de votre serie : ");
     scanf ("%d", &N);

     S1 = 0;
     S2 = 0;

     for (i=1;i<=N;i++)
     {
         printf ("\nEntrez vos valeurs : ");
         scanf ("%f", &Ai);
         S1 = S1+Ai;
         S2 = S2+Ai*Ai;
     }

     M = S1/N;
     V = S2/N-M*M;
     Ec = sqrt (V);

     printf ("\nLa moyenne de la serie vaut : %f\n", M);
     printf ("\nLa variance de la serie vaut : %lf\n", V);
     printf ("\nL'ecart type de la serie vaut : %lf\n", Ec);


     return 0;
}
