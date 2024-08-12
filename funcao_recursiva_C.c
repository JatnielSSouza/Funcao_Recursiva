#include<stdio.h>

int f(int *a, int n)
{
  if(n <= 0) return 0;
  else if(*a % 2 == 0) return *a + f(a+1, n-1);
  else return *a - f(a+1, n-1);
}
  
int main()
{
  int a[] = {12, 7, 13, 4, 11, 6};
  printf("\nO array a[] = {12, 7, 13, 4, 11, 6};\n");
  printf("\nO valor da funcao recursiva e = %d; \n", f(a, 2));

  printf("\nA funcao f realiza operacoes recursivas com os elementos do array a:\n- A chamada da funcao f(a,2) tem o array a e o valor 2 como argumentos;\n- O primeiro elemento e 12 (um numero par), entao retorna 12 + f(a+1, 1);\n- O segundo elemento e 7 (um numero impar), entao retorna 12 + (7-f(a+2,0));\n- A chamada f(a+2, 0) retorna 0 (conforme a condicao de base if(n <= 0));\n Portanto, a expressao final sera 12 + (7 - 0) = 19.\n");
  getchar();
  return 0;
}

/*
  A função f realiza operações recursivas com os elementos do array a:

    - A chamada da função f(a,2) tem o array a e o valor 2 como argumentos;
    
    - O primeiro elemento é 12 (um número par), então retorna 12 + f(a+1, 1);

    - O segundo elemento é 7 (um número ímpar), então retorna 12 + (7 - f(a+2, 0));

    - A chamada f(a+2, 0) retorna 0 (conforme a condição de base if(n <= 0));

    Portanto, a expressão final será 12 + (7 - 0) = 19.
*/