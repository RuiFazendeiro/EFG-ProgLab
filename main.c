//main.c

#include "structs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100  // Máximo de mesas e clientes que esperamos ler

Mesa mesas[MAX];         // Array para guardar mesas
Cliente clientes[MAX];   // Array para guardar os grupos de clientes

int nMesas = 0;          // Contador de mesas lidas do ficheiro
int nClientes = 0;       // Contador de clientes lidos do ficheiro

int main ()
{

    // Abre os ficheiros de mesas e clientes
FILE *fMesas = fopen("mesas.csv", "r");
FILE *fClientes = fopen("clientes.csv", "r");

// Verificação de erro ao abrir os ficheiros
if (!fMesas || !fClientes) 
{
    printf("Erro ao abrir ficheiros.\n");
    return 1;  // Termina o programa com erro
}

}
