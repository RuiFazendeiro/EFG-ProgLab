// structs.h
#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
    int id;          // Identificador único da mesa (ex: 1, 2, 3...)
    int lugares;     // Total de lugares disponíveis na mesa
    int ocupados;    // Quantos desses lugares estão atualmente ocupados
} Mesa;

typedef struct {
    char grupo;           // Letra identificadora do grupo (ex: 'A', 'B'…)
    int pessoas;          // Número de pessoas no grupo
    int mesaAtribuida;    // ID da mesa atribuída ao grupo (0 se ainda não tiver mesa)
} Cliente;

#endif