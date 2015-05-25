#include<stdio.h>
#include<stdlib.h>
#include"lista_f.h"


int main()
{
	printf("\n****************************************************\n");
	printf("* Trabalho 1-AV2 de Estrutura de Dados I\n");
	printf("* Curso de Sistemas da informacão\n");
	printf("* Aluno: Rodrigo Pires Alves - matricula: 0050008325\n");
	printf("* Listas\n");	
	printf("****************************************************\n");
	
	Lista *l, *lnova;
	int x;
	
	l = lst_cria();
	
	//inserir uma lista
	
	l = lst_insere(l, 3);
	l = lst_insere(l, 17);
	l = lst_insere(l, 5);
	l = lst_insere(l, 12);
	l = lst_insere(l, 35);
	l = lst_insere(l, 76);
	l = lst_insere(l, 44);
	l = lst_insere(l, 25);
	l = lst_insere(l, 89);
	l = lst_insere(l, 67); 
	
	//imprimir a lista inserida 
	
	printf("Lista Inserida:\n\n");
	lst_imprime(l);
	
	lnova = lst_cria();
	printf("\n\n");
	printf("Qual numero separar:\n");
	scanf("%d", &x);
	lnova = separa(l, x);
	
	printf("\n");
	
	//lista nova e a lista antiga apos a separação
	
	lst_imprime(lnova);
	printf("\n");
	lst_imprime(l);
	
	
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
