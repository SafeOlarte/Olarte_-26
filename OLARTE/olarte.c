#include <stdio.h>
int main() {
    
    int totalResidents = 0;
    int residentNumber = 0;
    int age = 0;
    int eligibleCount = 0;
    int validCount = 0;
    double totalAge = 0.0;
    double averageAge = 0.0;

    printf("==================================================\n");
    printf("Barangay Senior Citizen Eligibility Checker\n");
    printf("==================================================\n");

    while (totalResidents <= 0) {
        printf("How many residents will be evaluated? ");
        scanf("%d", &totalResidents);

        if (totalResidents <= 0) {
            printf("Invalid input. Please enter a positive number greater than zero.\n");
        }
    }

    for (residentNumber = 1; residentNumber <= totalResidents; residentNumber++) {
        validCount = 0;

        while (validCount == 0) {
            printf("Enter age of resident %d: ", residentNumber);
            scanf("%d", &age);

            if (age < 0 || age > 150) {
                printf("Invalid age. Please enter an age from 0 to 150.\n");
            } else {
                validCount = 1;
            }
        }

        totalAge += age;

        if (age >= 60) {
            eligibleCount++;
            printf("Resident %d is eligible for senior citizen benefits.\n", residentNumber);
        } else {
            printf("Resident %d is not eligible for senior citizen benefits.\n", residentNumber);
        }
    }

    averageAge = totalAge / totalResidents;

    printf("==================================================\n");
    printf("Final Summary\n");
    printf("==================================================\n");
    printf("Total residents evaluated: %d\n", totalResidents);
    printf("Total senior citizens: %d\n", eligibleCount);
    printf("Average age: %.2f\n", averageAge);

    return 0;
}
