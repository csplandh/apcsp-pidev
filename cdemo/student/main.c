#include <stdio.h>
#include "student.h"
int main()
{
        char  input [256];
        int num;
        printf("Number od Students: ");
        fgets (input, 256, stdin);
        sscanf(input, "%d", &num);
struct Student student[num];

for (int i = 0; i <num; i++)
{
        printf("First name: \n");
        fgets(input, 256, stdin);
        sscanf(input, "%s\n", student[i].firstname);

        printf("Last name: \n");
        fgets(input, 256, stdin);
        sscanf(input, "%s\n", student[i].lastname);
        
        printf("Age: \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d\n", &student[i].age);
        
        printf("Student ID: \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d\n", &student[i].studentid);
}
for (int i = 0; i<num;i++)
{
        printStudent(&student[i]);
}
}

