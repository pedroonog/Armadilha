//ARMADILHA
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()

{
	
	
	int a=0;
	int b, n1, n2, n, ac=0, cont=0;
	
	srand(time(NULL));
	b=a+rand()%100;
	
	printf("\n Tente adivinhar o numero\n\n");
	
	do
	{
	printf("\n Digite o limite inferior: ");
	scanf("%d", &n1);
	
	printf("\n Digite o limite superior: ");
	scanf("%d", &n2);
		
	if(n1>n2)
		{
			n=n1;
			n1=n2;
			n2=n;
		}
		
	cont=cont+1;
			
	if (b==(n1+1)&&b==(n2-1))
		{
			printf("\n Acertou!");
			ac=ac+1;
			
			printf("\n\n O numero escolhido foi: %d",b);
			
			printf("\n Voce precisou de %d tentativas", cont);		
		}
	else
		{
	if((b>n1)&&(b<n2))
		{
			printf("\n Meu numero esta entre os escolhidos\n\n");
		}
	else
		{
			printf("\n Meu numero nao esta entre os escolhidos\n\n");
		}
		}	
	}
	while (ac==0);
	
}

