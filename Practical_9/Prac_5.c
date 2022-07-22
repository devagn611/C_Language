#include <stdio.h>
int length(char *p);
int main()
{
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
  char p[20];
  int stringlength = 0;
  printf("enter your string: ");
  // fgets(p, sizeof(p), stdin);
  gets(p);

  stringlength = length(p);
  printf("Length of string is %d",stringlength );
  return 0;
}

int length(char *p)
{
  int length,c = 0;
  while (*p != '\0')
  {
    c++;
    p++;
  }
  
  length=c;
  return length;
}
