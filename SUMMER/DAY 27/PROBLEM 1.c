#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s[50];
    int n = 0, choice, i;

    do {
        printf("\nStudent Record System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Age, Marks: ");
                scanf("%d %s %d %f", &s[n].id, s[n].name, &s[n].age, &s[n].marks);
                n++;
                break;
            case 2:
                for(i = 0; i < n; i++)
                    printf("ID:%d Name:%s Age:%d Marks:%.2f\n", s[i].id, s[i].name, s[i].age, s[i].marks);
                break;
            case 3: {
                int id, found = 0;
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for(i = 0; i < n; i++) {
                    if(s[i].id == id) {
                        printf("Found: ID:%d Name:%s Age:%d Marks:%.2f\n", s[i].id, s[i].name, s[i].age, s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Student not found.\n");
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
