#include <stdio.h>

int main(void)
{
  int n;

  do {
    printf("Digite um numero de 1 a 8: ");
    scanf("%d", &n);
  } while (n < 1 || n > 8);

  for (int i = 0; i < n; i++) // constroi as linhas
  {
    for (int j = 0; j < n; j++) // constroi as colunas
    {
      if (n - i - 2 < j) // Verifica a partir de qual posição devemos desenhar as #
        printf("#");
      else
        printf(" "); // Adiciona um espaço em vez de "#"
    }
    printf("\n"); // Adicione essa linha para imprimir uma nova linha após cada linha de "#"s
  }

  return 0;
}
