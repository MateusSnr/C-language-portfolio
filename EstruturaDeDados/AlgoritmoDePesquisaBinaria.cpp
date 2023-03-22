#include<stdio.h>

int main(){
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
	int item = 8;
	
    int begin = 0;
    int end = 10;
    
    while (begin <= end) {  /* Condição de parada */

        int i = (begin + end) / 2;  /* Calcula o meio do sub-vetor */
        
        printf(" Valor do meio (i) %d \n",i);

        if (vetor[i] == item) {  /* Item encontrado */
        	printf(" Valor %d encontrado na posicao %d .",vetor[i],i);
            return i;
        }

        if (vetor[i] < item) {  /* Item está no sub-vetor à direita */
            begin = i + 1;
        } else {  /* vetor[i] > item. Item está no sub-vetor à esquerda */
            end = i;
        }
    }
}


