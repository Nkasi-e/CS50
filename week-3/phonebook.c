#include <stdio.h>
#include <string.h>

// The struct is used to create a custom data type

typedef struct {
    char *name;
    char *number;
    int age;
}
person;

int main(void) {
    // char** names[] = {"Bethel", "Zilax"};
    // char** numbers[] = {"+236-46726-65", "+347-823-838"};

    // char name[250];
    // printf("Name: ");
    // scanf("%s", &name);
    // printf("Name %s\n", name);

    // for (int i = 0; i < strlen(names); i++) {
    //     if (strcmp(names[i], name) == 0) {
    //         printf("Found %s\n", numbers[i]);
    //         return 0;
    //     }
    // }

    // printf("Not Found\n");
    // return 1;


    person people[2];
    people[0].name = "Bethel";
    people[0].number = "+234-434-334-44";
    people[1].name = "Zilax";
    people[1].number = "+234-434-334-44";

    char name[100];
    printf("Number: ");
    scanf("%s", &name);

    for (int i = 0; i < strlen(people); i++) {
        if (strcmp(people[i].name, name) == 0) {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not Found\n");
    return 1;

}