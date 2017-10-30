#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int func(int argc)
{
  char a[10];
  char b[10];
  int i = 0;
  while (i < argc)
  {
    a[i] = b[i];
    i++;
  }
  return 42;
}



int main(int argc, char** argv)
{
  func(100);
  return 0;
}
