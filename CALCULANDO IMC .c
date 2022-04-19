#include <stdio.h>

void  main()
{
float peso,altura, imc;
	
printf("Entre com o seu peso :\n");
	scanf("%f", &peso) ; 
	
printf("Entre com a sua altura :\n");
	scanf("%f" , &altura) ;
		
	imc =  peso/altura*altura;
	
	printf("Seu IMC vale %f\n", imc);
	
	return 0 ;
}


