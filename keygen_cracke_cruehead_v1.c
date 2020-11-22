/* KEYGEN CRACKEME Cruehead
 * By sisfenix
 * At 20201121
 * Version 1 */

#include <stdio.h>

#define KEYA 0x5678
#define KEYB 0x1234

int main(void){
  int result,soma,i=0;
  char *nome;

  printf("Digite o nome: ");
  scanf("%s",nome);

  // LER / SOMA BYTE A BYTE 
  while(nome[i] != '\0'){
    // CONVERTE DE MINUSCULO PARA MAIUSCULO
    if (nome[i] >= 0x61 && nome[i] <= 0x7A){
      nome[i] = nome[i] - 0x20;
    }

    // SOMA BYTE A BYTE 
    soma = soma + nome[i];

    i++;
  }

  // CALCULA O RESULTADO (SOMA XOR CHAVE)
  result = soma ^ KEYA ^KEYB ;
  
  //EXIBE OS RESULTADOS
  printf("A chave eh: %i\n", result);

  return 0;
}
