#include <stdio.h>
#include <stdlib.h>

#define PRINCIPAL 1
#define PRDUTO 2
#define PEDIDO 3

void comandoInvalido();
void mostraMenuPrincipal();
void mostraMenuProduto();
void mostraMenuPedido();
void incluiProduto();
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

int main(){
	mostraMenuPrincipal();
	return 0;
}

void comandoInvalido(){
	printf("\nCOMANDO INVALIDO! TENTE NOVAMENTE!\n"); 
	mostraMenuPrincipal();
}

void mostraMenuPrincipal(){
	int acao;
	printf("\nSeja bem vindo ao APP\nDigite 1 seguido de ENTER para GERENCIAR PRODUTO.\nDigite 2 seguido de ENTER para REGISTRAR PEDIDO DE COMPRA\nDigite 3 seguido de ENTER para DESTRUIR A LOJA\n Digite seguido de ENTER 4 para encerrar a aplicacao.");
	scanf("%d", &acao);
	switch(acao){
		case(1): mostraMenuProduto(); break;
		case(2): mostraMenuPedido(); break;
		
		
		default: comandoInvalido(); return;
	}
}

void mostraMenuProduto(){
    int acao;
	printf ("\nDigite 1 seguido de ENTER para INCLUIR PRODUTO\nDigite 2 seguido de ENTER para ALTERAR PRODUTO\n Digite 3 seguido de ENTER para EXCLUIR PRODUTO\n Digite 4 seguido de ENTER para CONSULTAR PRODUTO\n Digite 5 Seguido de ENTER para LISTAR PRODUTOS\nDigite 6 para RETORNAR AO MENU ANTERIOR ");
	scanf("%d", &acao);
	switch(acao){
		case(1):incluiProduto();
		case(2):alteraProduto();
		case(3):excluiProduto();
		case(4):consultaProduto();
		case(5):listaProduto();
		case(6):mostraMenuPrincipal();
		default: comandoInvalido(); return;
	}
}

void mostraMenuPedido(){
	
}
void incluiProduto(){
	
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
  printf("\n---------- CADASTRO DE PRODUTOS -----------\n\n\n");
  
  printf("Nome do produto ......: ");
  fflush(stdin);
  fgets(produto.nomeProduto, 50, stdin);
  
  printf("Descricao ......: ");
  fflush(stdin);
  fgets(produto.descricaoProduto, 50, stdin);
  
  printf("Informe o codigo do produto ..: ");
  scanf("%i", &produto.codigoProduto);
  
  printf("Informe o preco do produto ..: ");
  scanf("%f", &produto.precoProduto);
  
  printf("Informe a quantidade no estoque ..: ");
  scanf("%i", &produto.qtd_estoque);
  
  printf("\n\n --------- LENDO OS DADOS DO PRODUTO ---------\n\n");
  printf("\n Nome ...........: %s\n", produto.nomeProduto);
  printf("\n Descricao .....: %s\n", produto.descricaoProduto);
  printf("\n Codigo ...: %i\n" , produto.codigoProduto);
  printf("\n Preco ...: %f\n" , produto.precoProduto);
  printf("\n Quantidade no estoque ...: %i\n" , produto.qtd_estoque);
//CORRE?OES A SEREM APLICADAS:
//N estou conseguindo colocar numero decimal quando preencho o pre?o do produto.
//Colocar regras de preenchimento ao decorrer da aplica??o.
//OBS: O grupo dever? propor uma quantidade inicial de aloca??o. Quando o estiver cheio, dever? ser proposta uma estrat?gia para aumentar o tamanho do vetor
  
getch();
return 0;  
*/

