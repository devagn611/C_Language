#include <stdio.h>

int sum();
int main()
{
  int a, b, c;
  printf("\n Name - Maniya Devagn");
  printf("\n enrollment number - 210210116004");
  printf("\n");
  printf("enter a number 1-");
  scanf(" %d", &a);
  printf("enter a number 2-");
  scanf(" %d", &b);
  c = sum(a, b);
  printf("sum=%d", c);
  return 0;
}

int sum(int a, int b)
{
  int c = 0;
  c = a + b;
  return c;
}