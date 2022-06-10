#include <stdio.h>
#include <stdlib.h>

#define PRINCIPAL 1
#define PRODUTO 2
#define PEDIDO 3

void comandoInvalido();
void mostraMenuPrincipal();
void mostraMenuProduto();
void incluiProduto();
void mostraMenuPedido();
void alteraProduto();
void excluiProduto();
void consultaProduto();
void listaProduto();

typedef struct Produto {
 	int codigo;
 	char descricao[51];
 	int qtdEstoque;
 	double preco;
 
}produto;

typedef struct Node{
	produto *prod; 
	struct Node *next;
}node;

void insert(produto *prod, node *last){
	node *newNode = (node*)malloc(sizeof(node));	
	last->next = newNode;
}


int main(){
	mostraMenuPrincipal();
	return 0;
}

void comandoInvalido(int acao){
	printf("\nCOMANDO INVALIDO! TENTE NOVAMENTE!\n"); 
	switch(acao){
		case (PRINCIPAL): mostraMenuPrincipal();break;
		case (PRODUTO): mostraMenuProduto();break;
		case (PEDIDO): mostraMenuPedido();break;
		default: printf("\nMENU NAO EXISTENTE\nVOLTANDO AO MENU PRINCIPAL\n");mostraMenuPrincipal();break;
	}
	
}

void mostraMenuPrincipal(){
	int acao;
	printf("\nSeja bem vindo ao APP\nDigite 1 seguido de ENTER para GERENCIAR PRODUTO.\nDigite 2 seguido de ENTER para REGISTRAR PEDIDO DE COMPRA\nDigite 3 seguido de ENTER para DESTRUIR A LOJA\nDigite seguido de ENTER 4 para encerrar a aplicacao.\n");
	scanf("%d", &acao);
	switch(acao){
		case(1): mostraMenuProduto(); break;
		case(2): mostraMenuPedido(); break;
		default: comandoInvalido(PRINCIPAL); return;
	}
}

void mostraMenuProduto(){
    int acao;
	printf ("\nDigite 1 seguido de ENTER para INCLUIR PRODUTO\nDigite 2 seguido de ENTER para ALTERAR PRODUTO\nDigite 3 seguido de ENTER para EXCLUIR PRODUTO\nDigite 4 seguido de ENTER para CONSULTAR PRODUTO\nDigite 5 Seguido de ENTER para LISTAR PRODUTOS\nDigite 6 para RETORNAR AO MENU ANTERIOR\n");
	scanf("%d", &acao);
	switch(acao){
		case(1):incluiProduto();
		case(2):alteraProduto();
		case(3):excluiProduto();
		case(4):consultaProduto();
		case(5):listaProduto();
		case(6):mostraMenuPrincipal();
		default: comandoInvalido(PRODUTO); return;
	}
}

	
}

void mostraMenuPedido(){
	
}

void alteraProduto(){
	
}
void excluiProduto(){
	
}
void consultaProduto(){
	
}
void listaProduto(){
	
}

  
 /* 
  
//CORRE?OES A SEREM APLICADAS:
//N estou conseguindo colocar numero decimal quando preencho o pre?o do produto.
//Colocar regras de preenchimento ao decorrer da aplica??o.
//OBS: O grupo dever? propor uma quantidade inicial de aloca??o. Quando o estiver cheio, dever? ser proposta uma estrat?gia para aumentar o tamanho do vetor
  
getch();
return 0;  
*void incluiProduto(){
	printf("\n---------- CADASTRO DE PRODUTOS -----------\n\n\n");
  
	  printf("Nome do produto ......: ");
	  scanf("%d", 51);
	  
	  printf("Informe o codigo do produto ..: ");
	  scanf("%d", &produto.codigo);
	  
	  printf("Informe o preco do produto ..: ");
	  scanf("%d", &produto.preco);
	  
	  printf("Informe a quantidade no estoque ..: ");
	  scanf("%d", &produto.qtdEstoque);
	  
	  printf("\n\n --------- LENDO OS DADOS DO PRODUTO ---------\n\n");
	  printf("\n Nome ...........: %s\n", produto.nomeProduto);
	  printf("\n Descricao .....: %s\n", produto.descricaoProduto);
	  printf("\n Codigo ...: %i\n" , produto.codigoProduto);
	  printf("\n Preco ...: %f\n" , produto.precoProduto);
	  printf("\n Quantidade no estoque ...: %i\n" , produto.qtdEstoque);
*/

