#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee e[50];
    int n = 0, choice, i;

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Department, Salary: ");
                scanf("%d %s %s %f", &e[n].id, e[n].name, e[n].department, &e[n].salary);
                n++;
                break;
            case 2:
                for(i = 0; i < n; i++)
                    printf("ID:%d Name:%s Dept:%s Salary:%.2f\n", e[i].id, e[i].name, e[i].department, e[i].salary);
                break;
            case 3: {
                int id, found = 0;
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for(i = 0; i < n; i++) {
                    if(e[i].id == id) {
                        printf("Found: ID:%d Name:%s Dept:%s Salary:%.2f\n", e[i].id, e[i].name, e[i].department, e[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Employee not found.\n");
                break;
            }
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 4);

    return 0;
}
