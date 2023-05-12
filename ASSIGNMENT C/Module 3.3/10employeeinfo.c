#include <stdio.h>//Library file
#include <string.h>
// Define a struct for an employee
struct Employee 
{
    char name[50];
    int employee_number;
    char address[50];
    int age;
};
int main() 
{
    // Initialize an array of employee structs
    struct Employee employees[50];
    // Set the information for each employee
   
    strcpy(employees[0].name, "Raj ");
    employees[0].employee_number = 9874566897;
    strcpy(employees[0].address, "Main Street, Borivali");
    employees[0].age = 30;

    strcpy(employees[1].name, "Rohan");
    employees[1].employee_number = 9987852125;
    strcpy(employees[1].address, "Green road, Andheri");
    employees[1].age = 25;

    strcpy(employees[2].name, "Raju");
    employees[2].employee_number = 8785852125;
    strcpy(employees[2].address, "Kalaghoda Road");
    employees[2].age = 45;

    strcpy(employees[3].name, "Vishwas");
    employees[3].employee_number = 8784552125;
    strcpy(employees[3].address, "Dadar street");
    employees[3].age = 35;

    strcpy(employees[4].name, "Suresh");
    employees[4].employee_number = 9821200545;
    strcpy(employees[4].address, "Nr. Juhu beach");
    employees[4].age = 32;

    // Print out the information for each employee
    for (int i = 0; i < 5; i++) 
    {
        printf("Employee %d:\n", i + 1);
        printf("  Name: %s\n", employees[i].name);
        printf("  Employee Number: %d\n", employees[i].employee_number);
        printf("  Address/City: %s\n", employees[i].address);
        printf("  Age: %d\n", employees[i].age);
    }
     return 0;
}