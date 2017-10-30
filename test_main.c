#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int func(int argc)
{
  char a[1];
  char b[1];
  int i = 0;
  while (i <= argc)
  {
    a[i] = b[i];
    i++;
  }
  return 42;
}



int main(int argc, char** argv)
{
  func(argc);
  return 0;
}
