//Cadastre 2 clientes
//com o nome e a data de nascimento

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define QTD 1
#define FIM return 0

int main()
{
	typedef struct DATA
	{
		int dia;
		int mes;
		int ano;
	} DATA;
	
	struct CAD_CLIENTE
	{
		char nome[81];
		int idade;
		float peso;
		DATA dataN;
	};
	
	struct CAD_CLIENTE cadastro[QTD];
	int i;
	
	for (i = 0; i < QTD; i++ )
	{
		printf("Cadastro do aluno %i", i+1);
		puts("\nNome: "); //nome do aluno
		fflush(stdin);gets(cadastro[i].nome);
		
		printf("\nIdade: ");
		scanf("%i", &cadastro[i].idade);
		
		printf("\nPeso: ");
		scanf("%f", &cadastro[i].peso);
		
		printf("\nData de nascimento: ");
		scanf("%i/%i/%i", &cadastro[i].dataN.dia, &cadastro[i].dataN.mes, &cadastro[i].dataN.ano);
		
		system("cls");
	}
	
	for( i = 0; i < QTD; i++)
	{
		printf("Ficha do aluno %i\n\n\n", i+1);
		printf("Nome: %s\nIdade: %i\nPeso: %.2f\nData de Nascimento: %i/%i/%i\n\n", cadastro[i].nome, cadastro[i].idade, cadastro[i].peso, cadastro[i].dataN.dia, cadastro[i].dataN.mes, cadastro[i].dataN.ano);
	}
	
	
	FIM;
}
