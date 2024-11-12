#include <stdio.h>
#include <stdlib.h>

main(){
	char escolha;
	int litros;
	float a,g,descontoA,descontoG,total,desconto;
	a = 2.30;
	g = 3.10;
	
	printf("Qual o tipo de combustivel? (Alcool = A / Gasolina = G)\n");
	scanf("%c",&escolha);
	
	printf("\nQuantos litros?\n");
	scanf("%d",&litros);
	
	if(litros>25){
		descontoA = 0.04;
		descontoG = 0.05;
	}else{
		descontoA = 0.02;
		descontoG = 0.03;
	}
	switch (escolha){
	
		case 'A':
			total = litros * a;
			desconto = total*descontoA;
			printf("\nO Cliente comprou Alcool\nO Total foi %.2f \nO Desconto foi de %.2f\nO Total com desconto %.2f",total,desconto,total-desconto);
			break;
		case 'G':
			total = litros * g;
			desconto = total*descontoG;
			total = total - desconto;
			printf("\nO Cliente comprou Alcool\nO Total foi %.2f \nO Desconto foi de %.2f\nO Total com desconto %.2f",total,desconto,total-desconto);
			break;
	}                        
}                       
                            
		
	