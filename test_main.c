#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
  char a[10];
  char b[10];
  int i = 0;
  while (i < argc)
  {
    a[i] = b[i];
    i++;
  }
  return 0;
}
