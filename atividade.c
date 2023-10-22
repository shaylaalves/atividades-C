
#include <stdio.h>

int main() {

  // Variaveis de Teste
  int quantidadeDeDias = 20;
  int quantidadeDePostos = 5;

  // Variaveis de Dados
  int vacinas[quantidadeDePostos][quantidadeDeDias];
  int numeroVacinas;

  // Lendo Valores
  for (int i = 0; i < quantidadeDeDias; i++) {
    for (int j = 0; j < quantidadeDePostos; j++) {
      printf("Digite o número de vacinas aplicadas no dia %d:\n", i + 1);
      printf("no posto de saude %d: ", j + 1);
      scanf("%d", &numeroVacinas);
      vacinas[j][i] = numeroVacinas;
    }
  }

  // Mostrando Valores
  printf("Registro de Vacinas aplicadas:\n");
  for (int i = 0; i < quantidadeDeDias; i++) {
    printf("Dia %d :\n", i + 1);
    for (int j = 0; j < quantidadeDePostos; j++) {
      printf("  Posto %d: %d \n", j + 1, vacinas[j][i]);
    }
  }
  return 0;
}