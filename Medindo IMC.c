#include <stdio.h>

void  main()
{
int num ; 

	printf("Entre com um inteiro :\n");
	scanf("%d", &num) ; 
	
	num = num + num%3;
	
printf("num = %d \n", num);

}

// estoque tenha alcançado  quantidade minima : entregar mais itens daquele produto
// estoque minimo do produto seja zero , entao nao é realizado novo pedido
// estoque atual do produto seja zero , uma mensagem ´´e emitida para o fornecedor entregar alguns itens . 
