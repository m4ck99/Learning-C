#include <stdio.h>
#include <stdlib.h>

struct employee {
    char *title;
    char *firstname;
    char *lastname;
    int eid;
    int ssn;
} ;

struct employees {
    struct employee employee1;
    struct employee employee2;
};
int main(void) {
    struct employees *engGroup = malloc(sizeof(struct employees));
    struct employee *eng1 = &engGroup->employee1;
    if (!engGroup) {
        puts("Memory is not allocated.");
    }
    for (int loop1 = 0; loop1 < 2; ++loop1) {
        if (loop1 > 0) {
            eng1 = &engGroup->employee2;
        }
        eng1->firstname = malloc(50 * sizeof(char));
        eng1->lastname = malloc(50 * sizeof(char));
        eng1->title = malloc(50 * sizeof(char));

        printf("Enter the employee's first name: ");
        scanf("%49s", eng1->firstname);
        printf("Enter the employee's last name: ");
        scanf("%49s", eng1->lastname);
        printf("Enter the employee's ID number: ");
        scanf("%d", &eng1->eid);
        printf("Enter the last four digits of the employee's SSN: ");
        scanf("%d", &eng1->ssn);
        printf("Enter the employee's job title (do not include the word 'Engineer'): ");
        scanf("%49s", eng1->title);
    }
    for (int loop2 =0; loop2 < 2; ++loop2) {
        if (loop2 > 0) {
            eng1 = &engGroup->employee1;
        }
        printf("Employee information for %s %s\n", eng1->firstname, eng1->lastname);
        printf("ID: %d\n", eng1->eid);
        printf("SSN: %d\n", eng1->ssn);
        printf("Title: %s\n", eng1->title);       
        }
    free(engGroup->employee1.firstname);
    free(engGroup->employee1.lastname);
    free(engGroup->employee1.title);
    free(engGroup->employee2.firstname);
    free(engGroup->employee2.lastname);
    free(engGroup->employee2.title);
    free(engGroup);
    return(0);

}

