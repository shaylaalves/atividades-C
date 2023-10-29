#include <stdio.h> 

int status(float nf, int p);

int main(void) {
  float nota[4], media, prova[6], trabalho[6];
  int nf, p, bimes, resultado;

  for (bimes = 0; bimes < 4; bimes++) {
    printf("Digite a nota da prova %d: ", bimes + 1);
    scanf("%f", &prova[bimes]);
    printf("Digite a nota do trabalho %d: ", bimes + 1);
    scanf("%f", &trabalho[bimes]);

    nota[bimes] = prova[bimes] + trabalho[bimes];
  }

  media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;

  printf("Qual a porcetagem de presença dos aluno no ano?");
  scanf("%d", &p);

  resultado = status(media, p);

  if (resultado == 1) {
    printf("Aprovado\n");
  } else if (resultado == 0) {
    printf("Reprovado\n");
  } else if (resultado == -1) {
    printf("Recuperação\n");
  }

  return 0;
}

int status (float media, int p) {
  if (p <75) {
    return 0;
  } else if (media >= 7.0) {
    return 1;
  } else if (media >= 5.0) {
    return -1;
  } else {
    return 0; 
  }
}