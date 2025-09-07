// Write a program to store employee details and print the salary slip of the employee. The details to be stored are:
#include <stdio.h>

int main()
{
    char emp_name[50];
    int emp_salary, emp_id;

    printf("Enter Employee Name:");
    scanf("%s", emp_name);

    printf("Enter Employee ID:");
    scanf("%d", &emp_id);

    printf("Enter Employee Salary:");
    scanf("%d", &emp_salary);

    // Employee Details
    float HRA = emp_salary * 0.2, DA = emp_salary * 0.1, Gross_salary = HRA + DA + emp_salary, net_salary = Gross_salary - (Gross_salary * 0.1);
    printf("\n---Salary Slip---\n");
    printf("Employee Name :%s\n", emp_name);
    printf("Employee ID :%d\n", emp_id);
    printf("Employee Salary :%d\n", emp_salary);
    printf("House Rent Allowance :%.1f\n", HRA);
    printf("Dearness Allowance :%.1f\n", DA);
    printf("Gross Salary :%.1f\n", Gross_salary);
    printf("Net Salary :%.1f\n", net_salary);

    return 0;
}