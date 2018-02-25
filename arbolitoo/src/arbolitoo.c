/*
 ============================================================================
 Name        : arbolitoo.c
 Author      : El Nacho
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int valor;
	struct nodo* hijoIzq;
	struct nodo* hijoDer;
};

 typedef struct nodo nodo;
 typedef struct nodo* ptrnodo;

void insertar(int dato, ptrnodo* arbol){
	ptrnodo ptr=*arbol;

	if (ptr==NULL){
		*arbol= (ptrnodo)malloc (sizeof (nodo));
		ptr = *arbol;
				ptr->valor=dato;
				ptr->hijoIzq=NULL;
				ptr->hijoDer=NULL;
	}
	else {
		if (ptr->valor > dato){
			insertar(dato,&ptr->hijoIzq);
		}
		else{
			insertar(dato,&ptr->hijoDer);
		}
	}
}

void mostrar(ptrnodo arbol){
	if (arbol != NULL){
	mostrar(arbol->hijoIzq);
	printf("%d \n",arbol->valor);

	mostrar(arbol->hijoDer);
}
}

int main(void) {

ptrnodo arbol=NULL;


insertar (1,&arbol);
insertar (8,&arbol);
insertar(33,&arbol);
insertar(38,&arbol);
insertar(43,&arbol);
insertar(76,&arbol);
insertar(45,&arbol);
insertar(97,&arbol);
insertar(43,&arbol);
insertar(34,&arbol);
insertar(23,&arbol);
insertar(56,&arbol);
insertar(56,&arbol);
insertar(78,&arbol);
insertar(79,&arbol);
mostrar(arbol);

return 0;

}
