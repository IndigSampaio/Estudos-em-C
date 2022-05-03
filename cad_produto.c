//Cadastre 1 produto. Esse produto contem
//descricao, qtn e valor

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	struct PRODUTO
	{
		char nome[50];
		char desc[50];
		int qtd;
		float valor;	
	};
	
	struct PRODUTO cad_produto;
	
	int qnt_produto, i;
	
	i = 0;
		
	printf("\nQuantos produtos deseja cadastrar: ");
	scanf("%i", &qnt_produto);
	
	do
	{
		puts("Digite o nome do produto: ");
		fflush(stdin);gets(cad_produto.nome);
		
		puts("\nDigite a descricao do Produto:");
		fflush(stdin);gets(cad_produto.desc);
		
		printf("\nQuantidade do produto: ");
		scanf("%i", &cad_produto.qtd);
		
		printf("\nValor unitario do produto: R$ ");
		scanf("%f", &cad_produto.valor);
		
		printf("\n\n\nNome: %s\nQuantidade: %i\nValor Uni.: R$ %f\nDescricao: %s", cad_produto.nome, cad_produto.qtd, cad_produto.valor, cad_produto.desc );

		
		i = i+1;
		
	}
	
	while(i < qnt_produto);
	
	
	return 0;
	
}
