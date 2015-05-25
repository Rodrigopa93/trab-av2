#include <stdio.h>
#include <stdlib.h>

struct lista
{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

//criar uma lista
Lista* lst_cria(void)
{
	return NULL;
}


//insere os valores na lista
Lista *lst_insere(Lista *l,int i)
{
   Lista *novo=(Lista*) malloc(sizeof(Lista));
   novo->info = i;
   novo->prox = l;
   return novo;
} 

//imprimi os valores
void lst_imprime(Lista *l)
{
    Lista *p;
    for(p=l; p!=NULL; p=p->prox)
    	printf("%d ->  ",p->info);
}
   	

//busca por um valor ou NULL caso não exista o valor 
Lista* lst_busca(Lista* l, int v)
{
	Lista* p;
	for(p=l; p!=NULL; p=p->prox)
	{
		if(p->info == v)
			return p;
	}
	return NULL;
}

//separa o valor colocado dos demais valores
Lista* separa(Lista* l, int n)
{
	Lista *a=l,*b=NULL;
	a=lst_busca(l,n);
	if(a==NULL)
	{
		puts("ERRO, digite novamente");
		return NULL;
	}
	else
	{
		if(a->prox==NULL)
		{
			return b;
		}
		else
		{
			b=a->prox;
		}
		a->prox=NULL;
		return b;
		 
	}
}

