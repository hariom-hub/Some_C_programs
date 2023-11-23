#include <stdio.h>
#include <stdio.h>

struct info
{
    char name[100];
    int age;
    float height;
    char address[100];
    char gender[100];
};

void printDashLine(int width) {
    for (int i = 0; i < width; ++i) {
        printf("-");
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    struct info s1[n];

    // Print top border
    printDashLine(58);

    for (int i = 0; i < n; ++i)
    {
        printf("| Enter the data of person %d:\n", i + 1);
        printf("| Name: ");
        scanf("%s", s1[i].name);
        printf("| Age: ");
        scanf("%d", &s1[i].age);
        printf("| Height: ");
        scanf("%f", &s1[i].height);
        printf("| Address: ");
        scanf("%s", s1[i].address);
        printf("| Gender: ");
        scanf("%s", s1[i].gender);
        printDashLine(58);
    }

    // Print bottom border for entered data
    printDashLine(58);

    // Print top border for output data
    printDashLine(58);
    
    for (int i = 0; i < n; ++i)
    {
        printf("| Data of person %d\n", i + 1);
        printf("| Name: %s\n", s1[i].name);
        printf("| Age: %d\n", s1[i].age);
        printf("| Height: %f\n", s1[i].height);
        printf("| Address: %s\n", s1[i].address);
        printf("| Gender: %s\n", s1[i].gender);
        printDashLine(58);
    }

    // Print bottom border for output data
    printDashLine(58);

    return 0;
}
