#include<stdio.h>
int T[100];
int val,n,x;
int main()
{
	printf("entrez le nombre d éléments du tableau\n");
	do
	{
	 scanf("%d",&n);
	} while (n>100 && n<0);
	printf("entrez les valeurs du tableau\n");
	for (int  i = 0; i <= n; i++){
    	scanf("%d",&T[i]);
	}

	printf("entrez la valeur recherchée \n");
	scanf("%d",&val);
	for (int i = 0; i < n; i++)
	{
		if (T[i] = val)
		{
			printf("valeur trouvée a la position %d\n",i );
		}
		else if(T[i]!= val)
		{
			printf("l élément n est pas dans le tableau\n");
		}	
	}

	return 0;
}