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

typedef struct Lista{
	produto *prod;
	int maxSize;
	int size;
}lista;

lista *iniciaLista(int maxSize){
	produto *prodAux = (produto*)malloc(sizeof(produto)*maxSize);
	lista *listaAux = (lista*)malloc(sizeof(lista));
	listaAux->prod = prodAux;
	listaAux->size = 0;
	listaAux->maxSize = maxSize;
	return listaAux;
}
int vetor[10];

produto *transfereProdutos(produto *prod, int size){
	produto *auxProd = (produto*)malloc(sizeof(produto)*size*INCREASE)
	for(int i=0; i<size; i++){
		auxProd[i] = prod[i];
	}
	free(prod);
	return auxProd;
}

void insere(produto *prod, lista *l){
	produto *prodAux = l->prod;
	if(l->maxSize == l->size){
		l->maxSize*=INCREASE;
		l->prod = transfereProdutos(l->prod, l->size);
	}
	prodAux[l->size++] = *prod;
}

int main(){
	produto *prod = (produto*)malloc(sizeof(produto));
	produto prod2;// = (produto*)malloc(sizeof(produto));
	prod->codigo = 1;
	prod->preco = 1.1;
	prod->qtdEstoque = 1;
	prod2 = *prod;
	printf("%d, %lf, %d\n", prod2.codigo, prod2.preco, prod2.qtdEstoque);
	return 0;
}




int main(){
	list produtos;
	init(&produtos);
	for(int i=0; i<10; i++){
		produto *prod = (produto*)malloc(sizeof(produto));
		prod->codigo = i*100;
		prod->preco = (i/2) + i;
		prod->qtdEstoque = i;
		insrert(prod, &produtos);
		free(prod);
	}
	
	for(int i=0; produtos.size; i++){
		node *no = produtos.first;
	}
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

  


