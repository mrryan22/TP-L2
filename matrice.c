#include<stdio.h>
int A[10][10],B[10][10],C[10][10],D[10][10];
int nbl1,nbc1,nbl2,nbc2,i,j;
int main()
{
	printf("entrez le nombre de ligne et de colonne de la premiere matrice \n");
	do
	{
	 scanf("%d%d",&nbl1,&nbc1);
	} while (nbl1>10 && nbc1>10);

	printf("entrez les elements de la matrice\n");
	for (int  i = 1; i <= nbl1; i++)
	{
		for (int j = 1; j <= nbc1; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	printf("entrez le nombre de ligne et de colonne de la deuxieme matrice \n");
	do
	{
	 scanf("%d%d",&nbl2,&nbc2);
	} while (nbl2>10 && nbc2>10);

	printf("entrez les elements de la matrice\n");
	for (int  i = 1; i <= nbl2; i++)
	{
		for (int j = 1; j <= nbc2; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}

	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

 printf("le resultat de la somme des matrices A et B est la matrice \nC =\n");
 for (int i = 0; i < 10; i++)
 {
 	for (int j = 0; j < 10; j++)
 	{
 		printf("%d\t",C[i][j]);
 	}
 	printf("\n");
 }
  if (nbc1 != nbl1)
  {
  	printf("operation impossible");
  }else{
  	for (int i = 0; i <= nbl1; i++)
  	{
  		for (int j = 0; j <= nbc2; j++)
  		{
  			D[i][j]=0;
  			for (int k = 0; i <= nbc1; k++)
  			{
  				D[i][j] += A[i][k] * B[i][k];
  			}
  		}
  	}
  }

printf("le resultat de la multiplication est \nD=\n");
for (int i = 0; i <= 10; i++)
{
	for (int j = 0; j <= 10; j++)
	{
		printf("%d\n",D[i][j] );
	}
}



	return 0;
}