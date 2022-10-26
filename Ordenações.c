#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 4,7,2,5,4,0
// começa pelo 7, compara com o 4
void insertionSort(int *lista, int tam)
{
    int i, j, aux;
    for (i = 0; i < tam - 1; i++)
    {
        if (lista[i] > lista[i + 1])
        {                            // ex 6, 4
            aux = lista[i + 1];      // aux recebe 6
            lista[i + 1] = lista[i]; // posicao 0 recebe 4
            lista[i] = aux;          // posicao 1 recebe 6
            j = i - 1;
            while (j >= 0)
            {
                if (aux < lista[j])
                {
                    lista[j + 1] = lista[j];
                    lista[j] = aux;
                }
                else
                {
                    break;
                }
                j = j - 1;
            }
        }
    }
}

void selectionSort(int *lista, int tam){
    int i, j, aux, menor;

    for(i=0; i<tam-1; i++){
        menor=i;
        for (j=i+1; j<tam; j++){
            if(lista[menor]>lista[j]){
                menor=j;
            }
            
            if(i!=menor){
                aux=lista[i];
                lista[i]=lista[menor];
                lista[menor]=aux;
            }
        }
    }

}

int main()
{

    int tam, i;
    printf("Digite quantas casas o vetor devera ter: \n");
    scanf("%d", &tam);
    int *lista = (int *)malloc(tam * sizeof(int));
    for (i = 0; i < tam; i++)
    {
        lista[i] = rand() % 10;
    }
    printf("\n Lista desordenada: \n");
    for (i = 0; i < tam; i++)
    {
        printf("- %d\n", lista[i]);
    }
    selectionSort(lista, tam);
    printf("\n Lista ordenada: \n");
    for (i = 0; i < tam; i++)
    {
        printf("- %d\n", lista[i]);
    }
}
