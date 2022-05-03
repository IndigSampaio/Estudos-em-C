#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define QTD 3
#define RECEBE scanf
#define FIM return 0
#define P printf

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	struct PRODUTO 
	{
		char nome[50];
		char desc[50];
		int qtd;
		float valor;	
	}; //produtox, produtoy;
	
	struct PRODUTO cad_produto[QTD];
	int i;
	
	for (i=0; i<QTD; i++)
	{
		P("Produto %i\n\n", i+1);
		puts("Digite o nome do produto: ");
		fflush(stdin);gets(cad_produto[i].nome);
		
		puts("\nDigite a descricao do Produto:");
		fflush(stdin);gets(cad_produto[i].desc);
		
		P("\nQuantidade do produto: ");
		RECEBE("%i", &cad_produto[i].qtd);
		
		P("\nValor unitario do produto: R$ ");
		RECEBE("%f", &cad_produto[i].valor);
		
		system("scl");
	}
	
	P("\n\nProdutos cadastrados \n\n");
	
	for (i=0; i<QTD; i++)
	{
		P("Nome: %s\nQuantidade: %i\nValor Uni.: R$ %.2f\nDescricao: %s\n\n\n", cad_produto[i].nome, cad_produto[i].qtd, cad_produto[i].valor, cad_produto[i].desc );
	}
	
	FIM;
}
