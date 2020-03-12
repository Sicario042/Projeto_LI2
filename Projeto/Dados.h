//
// Created by Lídia Anaís Coelho de Sousa on 12/03/2020.
//

#ifndef PROJETO_DADOS_H
#define PROJETO_DADOS_H

typedef enum {VAZIO, BRANCA, PRETA} CASA;
typedef struct {
    int coluna;
    int linha;
} COORDENADA;
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;
typedef JOGADA JOGADAS[32];
typedef struct {
    CASA tab[8][8];
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

#endif //PROJETO_DADOS_H