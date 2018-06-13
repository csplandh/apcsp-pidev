#include <stdio.h>

int main()
{
   int a;
   int* ptrtoa;

   ptrtoa = &a;

   a = 5;
   printf("The value of a is %d\n", a);

*ptrtoa = 6;
printf("The value of a is %d\n", a);

printf("The value of ptrtoa is %d\n", ptrtoa);
printf("It stores the value %d\n", *ptrtoa);
printf("The address of a is %d\n", &a);

     float  d;
     float  e;
      d = 46.1;
    float* ptrtod = &d;
     printf("The value of d is %f\n and the address is %d\n", d, &d);
      e = 11.2;
    float* ptrtoe = &e;
     printf("The value of e is %f\n and the address is %d\n", e, &e);
     float temp = *ptrtoe;
     *ptrtoe = *ptrtod;
     *ptrtod = temp;
     printf("The value of d is %f\n", *ptrtod);
     printf("The value of e is %f\n", *ptrtoe);
    
     
}
