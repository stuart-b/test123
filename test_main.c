#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int error(int arg)
{
  char a[2];
  char b[2];
  
  a[arg] = 'm';
  
  return argc;
}

int error2(int arg)
{
  char a[2];
  char b[2];
  if (argc > 10)
  {
    a[arg] = 'm';
  }
  return argc;
}


int main(int argc, char** argv)
{
  
  error(argc);
  error2(argc);
  return 0;
}
