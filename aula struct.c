#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	struct PONTO
	{
		float x;
		float y;	
	};
	
	struct PONTO vponto;
	
	printf("Digite o valor das coordenadas X e Y:\n");
	scanf("%f %f", &vponto.x, &vponto.y);
	
	printf("A coordenada X e %f e a coordenada Y e %f", vponto.x, vponto.y);
	
	return 0;
}
