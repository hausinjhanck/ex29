//exercicio do troco
#include <stdio.h>
#define COC 3.50
#define ICE 4.80
#define GUA 2.10
#define SUC 1.9
#define CAF 0.70


int main ()
{
	float x;//opção digitada dentro da máquina
	float p;//valor do produto escolhido
	int a;//opção a ser colocadana maquina
	float t;//troco
	int y;//contador

	printf("Qual produto você deseja?\nInsira:\n\t1-Coca-Cola           \tR$ 3,50\n\t2-Smirnoff Ice        \tR$ 4,80\n\t3-Guaraná Antarctica \tR$ 2,10\n\t4-Suco de Maracujá   \tR$ 1,90\n\t5-Cafezinho com Leite \tR$ 0,70\n");//lista da maquina
	
	a=getchar();

	switch(a)
	{
		case '1':
		printf("O valor da sua bebida e': %.2f\n",COC);	
		p=COC;
		break;

		case '2':
		printf("O valor da sua bebida e': %.2f\n",ICE);	
		p=ICE;
		break;
		
		case '3':
		printf("O valor da sua bebida e': %.2f\n",GUA);	
		p=GUA;
		break;
		
		case '4':
		printf("O valor da sua bebida e': %.2f\n",SUC);	
		p=SUC;
		break;
		
		case '5':
		printf("O valor da sua bebida e': %.2f\n",CAF);	
		p=CAF;
		break;
		
		default:
		printf("Erro, Opção invalida\n");
		return 1;

	}
	printf("Você tem alguns segundos para colocar o dinheiro na maquina\n");
	sleep(2);
	
	printf("Digite o valor inserido\n");
	scanf("%f",&x);
	t=x-p;
	printf("Troco: %.2f\n", t);
//troco em moedas	
	while(t>0)
	{
		if(t>=1.0)
		{
			while(t>=1.0)
			{
				t = t-1.0;
				y++;
			}
		

			printf("%d moedas de 1 real\n", y);
		}
			else if(t<1.0 && t>=0.50)
			{
				while(t<1.0 && t>=0.50)
				{
					t = t - 0.50;
					y=0;
					y++;
				}
				printf("%d moedas de 50 centavos\n", y);
			}
			else if(t<0.50 && t>=0.25)
			{
				while(t<0.50 && t>=0.25)
				{
					t = t - 0.25;
					y=0;
					y++;
				}
			printf("%d moedas de 25 centavos\n", y);
			}
			if(t<0.25 && t>=0.10)
			{
				while(t<0.25 && t>=0.10)
				{
					t = t - 0.10;
					y=0;
					y++;
				}
			printf("%d moedas de 10 centavos\n", y);
			}
			else if(t<0.10 && t>=0.05)
			{
				while(t<0.10 && t>=0.05)
				{
					t = t - 0.05;
					y=0;
					y++;
				}
			printf("%d moedas de 5 centavos\n", y);
			}
			else if(t<0.05 && t>0)
			{
				while(t<0.05 && t>0)
				{
					t = t - 0.01;
					y=0;
					y++;
				}
			printf("%d moedas de 1 centavos\n", y);
			}
	}
	return 0;
}
