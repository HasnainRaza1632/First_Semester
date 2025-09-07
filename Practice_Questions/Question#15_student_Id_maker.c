
#include <stdio.h>
#define Total_marks 300
int main()
{
       char student_name[50]; // Use an array to store the name
       int Roll_number;
       float obtain_marks;

       printf("Enter Your name:\n");
       scanf("%s", student_name);

       printf("Enter your Roll No:\n");
       scanf("%d", &Roll_number);

       printf("Enter Obtain marks:\n");
       scanf("%f", &obtain_marks);

       float percentage_Student = (obtain_marks / Total_marks) * 100;

       printf("Name: %s\n", student_name);
       printf("Roll No:%d\n", Roll_number);
       printf("Total marks:%d\n", Total_marks);
       printf("Obtain marks:%.1f\n", obtain_marks);
       printf("Percentage:%.1f\n", percentage_Student);
       printf("Grade:%s\n",
              100 <= percentage_Student || percentage_Student >= 80 ? "A" : 79 <= percentage_Student || percentage_Student >= 70 ? "B"
                                                                        : 69 <= percentage_Student || percentage_Student >= 60   ? "C"
                                                                        : 59 <= percentage_Student || percentage_Student >= 50   ? "D"
                                                                                                                                 : "F");

       printf("Result:%s\n", obtain_marks >= 150 ? "PASS" : "FAIL");
       return 0;
}
