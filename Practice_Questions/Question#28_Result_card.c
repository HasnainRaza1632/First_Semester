#include <stdio.h>
#define Total_marks 500
#define Excellent 'A'
#define Good 'B'
#define Average 'C'
#define Pass 'D'
#define Fail 'F'
int main()
{
    int sub_1, sub_2, sub_3, sub_4, sub_5;

    printf("Enter Your Marks in Subject 1:");
    scanf("%d", &sub_1);

    printf("Enter Your Marks in Subject 2:");
    scanf("%d", &sub_2);

    printf("Enter Your Marks in Subject 3:");
    scanf("%d", &sub_3);

    printf("Enter Your Marks in Subject 4:");
    scanf("%d", &sub_4);

    printf("Enter Your Marks in Subject 5:");
    scanf("%d", &sub_5);

    // logic
    int obt_marks = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
    float Percentage = ((float)obt_marks / Total_marks) * 100;

    // Grade

    if (obt_marks > Total_marks || obt_marks < 0)
    {
        printf("Invalid Input");
    }
    else if (Percentage >= 90)
    {
        printf("Obtaining marks:%d\n", obt_marks);
        printf("Percentage:%.1f\n", Percentage);
        printf("Grade:%c\n", Excellent);
        printf("Remark:Excellent\n");
        printf("Final Result:%s\n", sub_1 > 33 && sub_2 > 33 && sub_3 > 33 && sub_4 > 33 && sub_5 > 33 ? "Pass" : "Fail");
    }
    else if (Percentage >= 80)
    {
        printf("Obtaining marks:%d\n", obt_marks);
        printf("Percentage:%.1f\n", Percentage);
        printf("Grade:%c\n", Good);
        printf("Remark:Good\n");
        printf("Final Result:%s\n", sub_1 > 33 && sub_2 > 33 && sub_3 > 33 && sub_4 > 33 && sub_5 > 33 ? "Pass" : "Fail");
    }
    else if (Percentage >= 70)
    {
        printf("Obtaining marks:%d\n", obt_marks);
        printf("Percentage:%.1f\n", Percentage);
        printf("Grade:%c\n", Average);
        printf("Remark:Average\n");
        printf("Final Result:%s\n", sub_1 > 33 && sub_2 > 33 && sub_3 > 33 && sub_4 > 33 && sub_5 > 33 ? "Pass" : "Fail");
    }
    else if (Percentage >= 60)
    {
        printf("Obtaining marks:%d\n", obt_marks);
        printf("Percentage:%.1f\n", Percentage);
        printf("Grade:%c\n", Pass);
        printf("Remark:Pass\n");
        printf("Final Result:%s\n", sub_1 > 33 && sub_2 > 33 && sub_3 > 33 && sub_4 > 33 && sub_5 > 33 ? "Pass" : "Fail");
    }
    else
    {
        printf("Obtaining marks:%d\n", obt_marks);
        printf("Percentage:%.1f\n", Percentage);
        printf("Grade:%c\n", Fail);
        printf("Remark:Fail\n");
        printf("Final Result:%s\n", sub_1 > 33 && sub_2 > 33 && sub_3 > 33 && sub_4 > 33 && sub_5 > 33 ? "Pass" : "Fail");
    }

    return 0;
}