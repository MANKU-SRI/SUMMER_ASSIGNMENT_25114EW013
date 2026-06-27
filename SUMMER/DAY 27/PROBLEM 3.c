#include <stdio.h>

struct Salary {
    int empId;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Salary s[50];
    int n = 0, choice, i;

    do {
        printf("\nSalary Management System\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salaries\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter EmpID, Name, Basic, HRA, DA: ");
                scanf("%d %s %f %f %f", &s[n].empId, s[n].name, &s[n].basic, &s[n].hra, &s[n].da);
                s[n].gross = s[n].basic + s[n].hra + s[n].da;
                n++;
                break;
            case 2:
                for(i = 0; i < n; i++)
                    printf("EmpID:%d Name:%s Gross Salary:%.2f\n", s[i].empId, s[i].name, s[i].gross);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 3);

    return 0;
}
