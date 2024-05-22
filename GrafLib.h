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

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Protótipos das funções */
/**
 * \brief           Soma dois números inteiros de 32 bits
 * \param a         Primeiro número inteiro
 * \param b         Segundo número inteiro
 * \return          Resultado da soma
 */
int somar(int a, int b);

/**
 * \brief           Divide dois números inteiros de 32 bits
 * \param a         Numerador
 * \param b         Denominador
 * \return          Resultado da divisão
 */
int dividir(int a, int b);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* GRAFLIB_H */
