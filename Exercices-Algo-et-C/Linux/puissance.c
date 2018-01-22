void Puissance(int nbr,int expo)
{
	int i=1;
	int p=1;
	
	while(i<=expo)
	{
		p=nbr*p;
		i++;
	}
	printf("%d",p);
}
