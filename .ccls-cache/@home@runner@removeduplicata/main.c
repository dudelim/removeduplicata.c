#include <stdio.h>
#include <string.h>

int main(void) {
   char palavra[50];
  int i, j, k;

  printf("Input: ");
  fgets(palavra, 50, stdin);

  for (i = 0; i < strlen(palavra); i++) {
    for (j = (1 + i); palavra[j] != '\0'; j++) {
      if (palavra[i] == palavra[j]) {
            for (k = j; palavra[k] != '\0'; k++) {
          palavra[k + 1] = palavra[k];
        }
      }
    }
  }

  printf("Output: %s", palavra);

  return 0;
}
