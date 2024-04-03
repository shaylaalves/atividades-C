#include <stdio.h>

// Função para verificar se o número é primo
int isPrime(int num)
{
  if (num <= 1) // 0 e 1 não são primos
    return 0;

  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
      return 0; // Se o número for divisível por algum número menor ou igual a sua raiz quadrada, não é primo
  }

  return 1; // Se o número não foi divisível por nenhum outro número, é primo
}

int main()
{
  int num;

  printf("Digite um número inteiro positivo para verificar se é primo: ");
  scanf("%d", &num);

  if (isPrime(num))
    printf("%d é um número primo.\n", num);
  else
    printf("%d não é um número primo.\n", num);

  return 0;
}

/* Algoritmo
Declare as váriaveis
leia A
determine se A é primo
Escreva A
Fim
*/
/*
ref. Determine se A é primo
  para I de 2 até A/2 passo 1 faça
  se (A mod I= = 0) então        //modulo (%)
    escreva (A não é primo);
  senão
    escreva (A não é primo);
  fimse
fim
fim
*/