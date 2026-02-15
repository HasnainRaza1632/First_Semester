#include <stdio.h>
#include <string.h>

int main() {
    typedef struct ClassStudents {
        char name[30];
        int marks;
        int rollNumber;
        char grade;
    }std;

    std arr[4];

    strcpy(arr[0].name,"HasnainRaza");
    arr[0].marks = 23;
    arr[0].rollNumber = 74708;
    arr[0].grade = 'A';

    strcpy(arr[1].name,"Abdullah");
    arr[1].marks = 23;
    arr[1].rollNumber = 75799;
    arr[1].grade = 'A';

    strcpy(arr[2].name,"Nawaz");
    arr[2].marks = 20;
    arr[2].rollNumber = 75711;
    arr[2].grade = 'B';

    for (int i = 0 ; i < 3 ; i++) {
        printf("Name: %s\n" , arr[i].name);
        printf("Roll Number: %d\n" , arr[i].rollNumber);
        printf("Marks: %d\n" , arr[i].marks);
        printf("Grade: %c\n" , arr[i].grade);
    }

    return 0;
}