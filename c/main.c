#include <stdio.h>
#include <stdlib.h>

typedef struct Name
{
    char first_name[20];
    char last_name[20];
} struct_name;

typedef struct Address
{
    char city[30];
    int zip;
} struct_add;

typedef struct Marks
{
    int sub1;
    int sub2;
} struct_marks;

typedef struct StudentDetails
{
    struct_name name;
    struct_add add;
    struct_marks marks;
} student_details;

void InputName(student_details *stu)
{
    printf("\nEnter First Name: ");
    scanf("%s", stu->name.first_name);
    printf("\nEnter Last Name: ");
    scanf("%s", stu->name.last_name);
    printf("\nEnter zip code: ");
    scanf("%d", stu->add.zip);
}

int main()
{
    student_details stu;
    int stu_no;
    printf("**********Student Details***********\n");
    printf("Enter number of students: ");
    scanf("%d", &stu_no);

    student_details *student_arr = malloc(stu_no * sizeof(student_details));

    int i;
    for (int i = 0; i < stu_no; i++)
    {
        printf("\nEnter details of Student %d: \n", i + 1);
        InputName(&student_arr[i]);
    }

    printf("%s", student_arr[1].name.first_name);
    printf("%d", student_arr[0].add.zip);

    return 0;
}