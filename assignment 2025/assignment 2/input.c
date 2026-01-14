#include <stdio.h>

int main() {
    char name[50];
    char department[50];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your department: ");
    scanf("%s", department);
    
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    
    return 0;
}