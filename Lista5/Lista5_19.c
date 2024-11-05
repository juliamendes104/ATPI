#include <stdio.h>
#define max 10
int main()
{
	int i,a[max],b[max],c[max];

	for (i=0; i<max; i++){
    printf("\nDigite o %d elemento do vetor A:\n",i+1);
		scanf("%d",&a[i]);
	}
	
  for (i=0; i<max; i++){
		printf("\nDigite o %d elemento do vetor B:\n",i+1);
		scanf("%d",&b[i]);
	}
	
	
	for (i=0; i<max; i++){
		c[i]=a[i]*b[i];
		printf("\n%d x %d = %d\n",a[i],b[i],c[i]);
	}
	//system("pause");	
	
	return 0;
}