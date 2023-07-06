#include <stdio.h>
#include <string.h>

int sget(char* vetor, int tam) {
    fflush(stdin); 
    if (fgets(vetor, tam, stdin)) { 
        int i;
        for( i = 0; vetor[i] != '\n' && vetor[i]; ++i)
          ;
        vetor[i] = '\0';
    }
}


#define TAM 50
int main(void) {
  char palavra[TAM];
  int i, j, k;

  printf("Input: ");
  sget(palavra, TAM);

  while(i < strlen(palavra)){
    j = 1 + i;
    while(palavra[j] != '\0'){
      if(palavra[j] == palavra[i]){
        j= k;
        while(palavra[k] != '\0'){
          palavra[k] = palavra[k + 1];
          k++;
        }
      }
      j++;
    }
    i++;
  }

  printf("Output: %s", palavra);
  return 0;
}
