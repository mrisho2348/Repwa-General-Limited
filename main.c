#include <stdio.h>
#include <string.h>

int main() {
    // Define the fees for each level
    int primarySchoolFees = 7000, primaryTransportFees = 4000, primaryFoodFees = 5000;
    int secondarySchoolFees = 70000, secondaryTransportFees = 40000, secondaryFoodFees = 50000;
    int advanceSecondaryFees = 71000, advanceTransportFees = 41000, advanceFoodFees = 51000;

    // Get user input for the student's name
    char studentName[50];
    printf("Enter the student's name: ");
    scanf("%s", studentName);

    // Check the level of the student and display payment details accordingly
    if (strcmp(studentName, "mrisho") == 0) {
        printf("Payment details for %s:\n", studentName);
        printf("School Fees: %d\n", primarySchoolFees);
        printf("Transport Fees: %d\n", primaryTransportFees);
        printf("Food Fees: %d\n", primaryFoodFees);
    } else if (strcmp(studentName, "zaria") == 0) {
        printf("Payment details for %s:\n", studentName);
        printf("School Fees: %d\n", secondarySchoolFees);
        printf("Transport Fees: %d\n", secondaryTransportFees);
        printf("Food Fees: %d\n", secondaryFoodFees);
    } else if (strcmp(studentName, "kareem") == 0) {
        printf("Payment details for %s:\n", studentName);
        printf("School Fees: %d\n", advanceSecondaryFees);
        printf("Transport Fees: %d\n", advanceTransportFees);
        printf("Food Fees: %d\n", advanceFoodFees);
    } else {
        printf("Student not found or invalid input.\n");
    }

    return 0;
}
