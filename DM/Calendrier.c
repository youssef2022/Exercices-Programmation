#include <stdio.h>
#include <stdlib.h>
 
int main()
{

	int jour, mois, annee,moinsjour,moinsmois,moinsannee,jecoulej,jecouled,moisa,jannivj,jannivd,joura,ecoule;
    printf("Entrer un jour :");
	scanf("%d",&jour);
	moinsjour=jour;
	printf("Entrer un mois :");
	scanf("%d",&mois);
	moinsmois=mois;
	printf("Entrer une annee entre 1900 et 2100 :");
	scanf("%d",&annee);
	moinsannee=annee;
	printf("--------------------------------");
	printf("\nEntrer une date d'anniversaire:");
	printf("\nentrer un jour :");
	scanf("%d",&joura);
	printf("Entrer un mois :");
	scanf("%d",&moisa);
	
	if ( (jour>=1 && jour<=31) && (mois>=1 && mois<=12) && (annee>=1900 && annee<=2100) && (joura>=1 && joura<=31) && (moisa>=1 && moisa<=12))
	{
		//printf("Votre date est :%d/%d/%d",jour,mois,annee);
		//printf("Votre date d'anniversaire est :%d/%d/%d",joura,moisa,annee);


        if( annee %400 ==0 || (annee %4 ==0 && (annee %100)!=0))							//Bisex 66
        {	
			switch (moisa)			// calcul du nombre de jours écoulé depuis le 1er janvier par rapport au mois d'anniverssaire
			{
				case 1:
					jannivj=joura;
					break;
				case 2:
					jannivj=joura+29;
					break;
				case 3:
					jannivj=joura+60;
					break;
				case 4:
					jannivj=joura+91;
					break;
				case 5:
					jannivj=joura+121;
					break;
				case 6: 
					jannivj=joura+152;
					break;
				case 7:
					jannivj=joura+182;
					break;
				case 8:
					jannivj=joura+213;
					break;
				case 9:
					jannivj=joura+244;
					break;
				case 10:
					jannivj=joura+274;
					break;
				case 11:
					jannivj=joura+305;
					break;
				case 12:
					jannivj=joura+335;
					break;
			}
			
			switch (mois)			//calcul du nombre de jours écoulé depuis le 1er janvier par rapport au mois de la date de départ
			{
				case 1:
					jecoulej=jour;
					break;
				case 2:
					jecoulej=jour+29;
					break;
				case 3:
					jecoulej=jour+60;
					break;
				case 4:
					jecoulej=jour+91;
					break;
				case 5:
					jecoulej=jour+121;
					break;
				case 6: 
					jecoulej=jour+152;
					break;
				case 7:
					jecoulej=jour+182;
					break;
				case 8:
					jecoulej=jour+213;
					break;
				case 9:
					jecoulej=jour+244;
					break;
				case 10:
					jecoulej=jour+274;
					break;
				case 11:
					jecoulej=jour+305;
					break;
				case 12:
					jecoulej=jour+335;
					break;
			}
					
			if (mois==2)																	//fevrier
			{ 
				if (jour == 29)																//jour 29
				{
					mois++;
					jour=1;
					moinsjour= jour-1;
					
				}
				else 																		// jour autre que 29 en fevrier
				{
					jour++;
					moinsjour= jour-2;
					if(moinsjour==0)  														// 1 mois en arriere
					{
						moinsmois= mois-1;
						moinsjour=31;
					}
				}
			}
			else if (mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12) // mois avec 31 jours 
			{
				if(jour==31)																	// jour 31
				{
					mois ++;
					jour=1;
					moinsjour= jour-1;
				
				}
				else 																			// jour autre que 31
				{
					jour++;
					moinsjour=jour-2;
					if (moinsjour==0)
					{
						if ( mois==5 || mois==7 || mois==10 || mois==12)                       	// 1 mois en arriere si mois precedent possede 30 jours
						{
						moinsmois=mois-1;
						moinsjour= 30;
						
						}
						else if ( mois==1 || mois==8) 											// 1 mois en arriere si mois precedent possede 31 jours 
						{		
						moinsmois=mois-1;
						moinsjour= 31;
						if(moinsmois ==0)
						{
							moinsmois=12;
							moinsannee=annee-1;
						}
						}
						else if (mois==3) 														// 1 mois en arrire si mois precedent possede 29 jours 
						{
						moinsmois= mois;
						moinsjour=29;
						}
						
					}
				}
			}
			else if(mois==4 || mois==6 || mois==9 || mois==11) 										// mois avec 30 jours 
																								
			{
				if(jour==30)																	 // jour 30
				{
					mois++;
					jour=1;
					moinsjour= jour-1;
				}
				else 																			// jour autre que 30 
				{
					jour++;
					moinsjour= jour-2;
				}
				
			}
			jecouled= 366-jecoulej;
			jannivd= 366-jannivj;
			ecoule=jecouled-jannivd;
			
			printf("------------------------------------------------");
			printf("\n%d est une annee bissextile",annee);
			printf("\n------------------------------------------------");
			printf("\nVotre date de demain : %d/%d/%d",jour,mois,annee);
			printf("\nVotre date d'hier : %d/%d/%d",moinsjour,moinsmois,moinsannee);
			printf("\n------------------------------------------------");
			printf("\nNombre de jour ecoule depuis le 1 janvier: %d jours", jecoulej);
			printf("\nNombre de jour restant jusqu'au 31 decembre: %d jours", jecouled);
			printf("\n------------------------------------------------");
			printf("\nNombre de jour entre la date et l'anniverssaire: %d jours", ecoule);
			printf("\n--------------------------------------------------");
         }
        else  																				// PAS BISSEX
       {
		   	switch (moisa)			//calcul du nombre de jours écoulé depuis le 1er janvier par rapport au mois d'anniverssaire
			{
				case 1:
					jannivj=joura;
					break;
				case 2:
					jannivj=joura+28;
					break;
				case 3:
					jannivj=joura+59;
					break;
				case 4:
					jannivj=joura+90;
					break;
				case 5:
					jannivj=joura+120;
					break;
				case 6: 
					jannivj=joura+151;
					break;
				case 7:
					jannivj=joura+181;
					break;
				case 8:
					jannivj=joura+212;
					break;
				case 9:
					jannivj=joura+243;
					break;
				case 10:
					jannivj=joura+273;
					break;
				case 11:
					jannivj=joura+304;
					break;
				case 12:
					jannivj=joura+334;
					break;
			}
		   
		   switch (mois)			//calcul du nombre de jours écoulé depuis le 1er janvier par rapport au mois de la date de départ
			{
				case 1:
					jecoulej=jour;
					break;
				case 2:
					jecoulej=jour+28;
					break;
				case 3:
					jecoulej=jour+59;
					break;
				case 4:
					jecoulej=jour+90;
					break;
				case 5:
					jecoulej=jour+120;
					break;
				case 6: 
					jecoulej=jour+151;
					break;
				case 7:
					jecoulej=jour+181;
					break;
				case 8:
					jecoulej=jour+212;
					break;
				case 9:
					jecoulej=jour+243;
					break;
				case 10:
					jecoulej=jour+273;
					break;
				case 11:
					jecoulej=jour+304;
					break;
				case 12:
					jecoulej=jour+334;
					break;
			}
			if (mois==2)																	//fevrier
			{ 
				if (jour == 28)																// jour 28
				{
					mois++;
					jour=1;
					moinsjour= jour-1;
					
				}
				else 																		// jour autre que 28 en fevrier
				{
					jour++;
					moinsjour= jour-2; 														
					if(moinsjour==0) 														//  mois en arriere
					{
						moinsmois= mois-1;
						moinsjour=31;
					}
				}
			}
			else if (mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12) // mois avec 31 jours 
			{
				if(jour==31)																	// jour 31 
				{
					mois ++;
					jour=1;
					moinsjour= jour-1;
				
				}
				else  																			// jour autre que 31
				{
					jour++;
					moinsjour=jour-2;
					if (moinsjour==0)
					{
						if ( mois==5 || mois==7 || mois==10 || mois==12)  						// 1 mois en arriere si mois precedent possede 30 jours
						{
						moinsmois=mois-1;
						moinsjour= 30;
						
						}
						else if ( mois==1 || mois==8) 											// 1 mois en arriere si mois precedent possede 31 jours
						{		
						moinsmois=mois-1;
						moinsjour= 31;
						if(moinsmois ==0)
						{
							moinsmois=12;
							moinsannee=annee-1;
						}
						}
						else if (mois==3) 														// 1 mois en arriere si mois precedent possede 28 jours 
						{
						moinsmois= mois;
						moinsjour=28;
						}
						
					}
				}
			}
			else if(mois==4 || mois==6 || mois==9 || mois==11) 										// mois avec 30 jours 
																								
			{
				if(jour==30) 																		// jour 30 
				{
					mois++;
					jour=1;
					moinsjour= jour-1;
				}
				else 																				// jour autre que 30 	
				{
					jour++;
					moinsjour= jour-2;
				}
				
			}
			jecouled= 365-jecoulej;
			jannivd= 365-jannivj;
			ecoule=jecouled-jannivd;
			printf("------------------------------------------------");
			printf("\n%d n'est pas une annee bissextile",annee);
			printf("\n------------------------------------------------");
			printf("\nVotre date de demain : %d/%d/%d",jour,mois,annee);
			printf("\nVotre date d'hier : %d/%d/%d",moinsjour,moinsmois,moinsannee);
			printf("\n------------------------------------------------");
			printf("\nNombre de jour ecoule depuis le 1 janvier: %d jours", jecoulej);
			printf("\nNombre de jour restant jusqu'au 31 decembre: %d jours", jecouled);
			printf("\n------------------------------------------------");
			printf("\nNombre de jour entre la date et l'anniverssaire: %d jours", ecoule);
			printf("\n--------------------------------------------------");
         }
    }
    else
    {
		printf("\nDate fausse");
	}
	printf("\n");
	system("Pause");
    return 0;
}
