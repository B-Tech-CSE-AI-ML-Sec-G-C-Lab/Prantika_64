/*Write a c program to demonstrate the use of a nested structure for strong 
employee information . Define an employee structure containing empid, empname, 
and a nested salary structure containing basic pay, da, hra, and cca. Accept
 the employee details from the user , calculate the gross salary using.
 Gross salary= Basic pay + DA + HRA + CCA 
 and display all employee details along with the calculated vgross salary.*/

 #include <stdio.h>
struct Salary
{
    float basic_pay;
    float da;
    float hra;
    float cca;
};
struct Employee
{
    int empid;
    char ename[50];
    struct Salary salary;
};
int main()
{
    struct Employee e;
    float gross_salary;
    printf("Enter Employee ID: ");
    scanf("%d", &e.empid);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.ename);
    printf("Enter Basic Pay: ");
    scanf("%f", &e.salary.basic_pay);
    printf("Enter DA: ");
    scanf("%f", &e.salary.da);
    printf("Enter HRA: ");
    scanf("%f", &e.salary.hra);
    printf("Enter CCA: ");
    scanf("%f", &e.salary.cca);
    gross_salary = e.salary.basic_pay +
                   e.salary.da +
                   e.salary.hra +
                   e.salary.cca;
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", e.empid);
    printf("Employee Name : %s\n", e.ename);
    printf("Basic Pay     : %.2f\n", e.salary.basic_pay);
    printf("DA            : %.2f\n", e.salary.da);
    printf("HRA           : %.2f\n", e.salary.hra);
    printf("CCA           : %.2f\n", e.salary.cca);
    printf("Gross Salary  : %.2f\n", gross_salary);
    return 0;
}