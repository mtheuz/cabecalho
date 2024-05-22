/**
 * \file            GrafLib.h
 * \brief           Arquivo de cabeçalho para GrafLib
 */

/*
 * Direitos Autorais (c) 2024 Matheus Mota, Dermerval Neves e Pedro Henrique
 *
 * Permissão é concedida, gratuitamente, a qualquer pessoa
 * que obtiver uma cópia deste software e dos arquivos de documentação
 * associados (o "Software"), para negociar o Software sem restrições,
 * incluindo, sem limitação, os direitos de uso, cópia, modificação, fusão,
 * publicar, distribuir, sublicenciar e/ou vender cópias do Software, e
 * para permitir que as pessoas a quem o Software é fornecido o façam,
 * sujeito às seguintes condições:
 *
 * O SOFTWARE É FORNECIDO "COMO ESTÁ", SEM GARANTIA DE QUALQUER TIPO,
 * EXPRESSA OU IMPLÍCITA, INCLUINDO, MAS NÃO SE LIMITANDO ÀS GARANTIAS
 * DE COMERCIALIZAÇÃO, APTIDÃO PARA UM PROPÓSITO ESPECÍFICO
 * E NÃO INFRAÇÃO. EM NENHUM CASO OS AUTORES OU TITULARES DE DIREITOS
 * AUTORAIS SERÃO RESPONSÁVEIS POR QUALQUER REIVINDICAÇÃO, DANOS OU OUTRA
 * RESPONSABILIDADE, SEJA EM UMA AÇÃO DE CONTRATO, DELITO OU OUTRA FORMA,
 * DECORRENTE DE, OU EM CONEXÃO COM O SOFTWARE OU O USO OU
 * OUTRAS NEGOCIAÇÕES NO PROGRAMAS.
 *
 * Este arquivo faz parte de GrafLib.
 *
 * Autor:           Matheus Mota <matheuzwork@gmail.com>, 
 *                  Pedro Henrique <phenrique@gmail.com>,  
 *                  Dermerval Neves <dermervalneves@gmail.com>
 * Versão:          1.0.0
 */
#ifndef GRAFLIB_H
#define GRAFLIB_H

#include <stdint.h>
#define LEFT 0
#define RIGHT 4
#define UP 2
#define DOWN 6
#define UPPER_RIGHT 1
#define UPPER_LEFT 3
#define BOTTOM_LEFT 5
#define BOTTOM_RIGHT 7


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * @brief Struct usada para sprits moveis.
 */
typedef struct{
int coord_x; /*Armazena a coordenada X do sprite. */
int coord_y; /*Armazena a coordenada Y do sprite. */
int direction; /*Armazena um numero inteiro indicando o ́angulo de movimento. */
int offset; /*Indica o offset de memoria ́utilizado para a escolha do bitmap armazenado no Processa-dor Grafico. */
int data_register; /*Indica o registrador do Banco de Registradores no qual as informaçoes do ̃sprite serao armazenadas. */
int step_x; /*Armazena o numero de pixels que o sprite ira se deslocar no eixo X quando o comando de movimentação for utilizado. */
int step_y; /*Armazena o numero de pixels que o sprite ira se deslocar no eixo Y quando o comando de movimentação for utilizado. */
int ativo; /*Habilita/Desabilita a impressao do ̃sprite em um determinado momento. */
int collision; /*Informa se o sprite sofreu alguma colisao. */
} Sprite; 

/**
 * @brief Struct usada para para os sprites fixos, ou seja, nao possuem movimentação durante o jogo.
 */
typedef struct{
int coord_x, coord_y, offset;
int data_register, ativo;
} Sprite_Fixed;

/**
 * @brief Usada para setar um sprite na tela
 * 
 * @param registrador      
 * @param x                Coordenada x do sprite na tela
 * @param y                Coordenada y do sprite na tela
 * @param offset           Deslocamento na memória para selecionar o bitmap
 * @param activation_bit   Ativação do sprite (0 - desativado, 1 - ativado)
 * @return                 0 quando a operação não foi realizada, e 1 quando foi bem sucedida
*/
int set_sprite( int registrador, int x, int y, int offset, int activation_bit);

/**
 * @brief Usada para modelar o background atraves do preenchimento dos blocos de 8x8 pixels
 * 
 * @param column    Valor da coluna do bloco.
 * @param line      Valor da linha do bloco.
 * @param R         Valor para a cor vermelha.
 * @param G         Valor para a cor verde.
 * @param B         Valor para a cor azul.
 * @return          0 quando a operação não foi realizada, e 1 quando foi bem sucedida
*/
int set_background_block( int column, int line, int R, int G, int B);

/**
 * @brief Usada para configurar a cor base do background a partir dos valores de Red, Green e Blue.
 * 
 * @param R   Valor para a cor vermelha.
 * @param G   Valor para a cor verde.
 * @param B   Valor para a cor azul.
 * @return    0 quando a operação não foi realizada, e 1 quando foi bem sucedida
*/
int set_background_color(int R, int G, int B);

/**
 * @brief Usada para atualizar as coordenadas x e y de um sprit móvel de acordo ao seu ângulo de movimento e valor de deslocamento.
 * 
 * 
 * @param sp       Ponteiro do sprite que deve ter suas coordenadas atualizadas
 * @param mirror   Define se as coordendas do sprite enviado devem ser espelhadas
*/
void increase_coordinate(Sprite *sp, int mirror);

/**
 * @brief Usada para verificar se ocorreu uma colisão entre dois sprites quaisquer a partir da técnica de sobreposição de retângulos.
 * 
 * @param sp1   Ponteiro para o sprite 1.
 * @param sp2   Ponteiro para o sprite 2.
 * @return      1 quando colisão foi detectada e 0 quando não.
*/
int collision(Sprite *sp1, Sprite *sp2);
