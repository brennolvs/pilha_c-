/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#define m 10 

using namespace std;

void inicializaPilha(int *topo){
    *topo = -1;
}

int pilhaVazia(int topo){
    if(topo==-1){
        return 1;
    }
    return 0;
}

int pilhaCheia(int topo){
    if(topo == m-1){
        return 1;
    }return 0;
}

void empilhar(int valor, int *topo, int *pilha){
    if(pilhaCheia(*topo)==1){
         printf("Pilha cheia");
    }else{
        (*topo)++;
        pilha[*topo] = valor;
        printf("Valor empilhado ocm sucesso!!");
    }
}

void mostrarTopo(int topo, int *pilha){
    if(pilhaVazia(topo)==1){
         printf("Pilha vazia!! ");
    }else{
        printf("\nTopo da pilha: %d", pilha[topo]);
    }
}

void desempilhar(int *topo, int *pilha){
    if(pilhaVazia(*topo)==1){
        printf("\nPilha vazia");
    }else{
        printf("\nO valor %d foi desempilhado!",pilha[*topo]);
        (*topo)--;
        
    }
}

int main(){
    
    int pilha[m];
    int topo;
    inicializaPilha(&topo);
    int op, valor;
    
    do{
        printf("\n1- Empilhar(push)");
        printf("\n2- Desempilhar(pop)");
        printf("\n3- Mostrar topo");
        printf("\n4- Sair");
        printf("\nInforme a sua opcao: ");
        scanf("%d", &op);
        
        switch(op){
            case 1:{
                //empilhar
                printf("Informe um valor: ");
                scanf("%d", &valor);
                empilhar(valor, &topo, pilha);
                break;
            }
            case 2:{
                //Desempilhar
                desempilhar(&topo, pilha);
                break;
            }
            case 3:{
                //mostrar topo
                mostrarTopo(topo,pilha);
                break;
            }
            case 4:{
                printf("Saindo...");
                break;
            }
            default:{
                printf("\nAlternativa inválida!");
                break;
            }
            
        }
    }while(op!=4);
    return 0;
}
