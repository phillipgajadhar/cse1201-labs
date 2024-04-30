#include <stdio.h>

struct Employee
{
    int id;
    char name[256];
    float salary;
};

int main(int argc, char const *argv[])
{
    int n = 3;
    struct Employee employees[n];
    int i;

    for (i = 0; i < n; i++)
    {
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    int maxSalaryIdx = 0;

    for (i = 1; i < n; i++)
    {
        if(employees[i].salary > employees[maxSalaryIdx].salary)
            maxSalaryIdx = i;
    }


    printf("Max salary is: %s\n", employees[maxSalaryIdx].name);
    
    


}

