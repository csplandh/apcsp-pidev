#include<stdio.h>

int main()
{
  int a = 10;
  float b = 2.31;
  double c = 42;
  char d = 6;
  unsigned int e = 7;
  signed int f = -4;

printf("Var a has a size of %d bytes\n,b has a size of %d bytes\n,c has a size of %d bytes\n,d has a size of %d bytes\n, e has a size of %d bytes\n, and f has a size of %d bytes\n" , sizeof(a)), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f);
}
