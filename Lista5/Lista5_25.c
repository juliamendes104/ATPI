#include <stdio.h>
#define max 15

int main()
{ 	int l, fib[max], ant=0, prox=1, aux;
		
	do{
		printf("\n Digite o limite:");
		scanf("%d",&l);
		if (l<=0 || l>max)
			printf("\n Digite um valor no intervalo de 1 a 15!");
	}while(l<=0 || l>max);
	
	printf("\n Série de Fibonacci: ");
	printf("%d", prox);
	
	for (int i=1; i<l; i++)
	{
		aux=ant+prox;
		fib[i]=aux;
    ant=prox;
		prox=aux;
	}
    for (int i=1; i<l; i++)
	    printf(" %d", fib[i]);
	

	printf("\n");
	//system("PAUSE");
	return 0;
}