#include <stdio.h>

// function identifier
float average(int marks1, int marks2)
{
    return (float)(marks1 + marks2) / 2;
}

struct student
{
    int rollno;
    char *name;
    int m1, m2, m3;
    float percent;
};

// User-defined type idnetifier
struct student s1 = {1, "Chris", 50, 60, 70, 60.00};

// Typedef identifier
typedef struct student STUDENT;
STUDENT s2 = {1, "David", 50, 60, 70, 60.00};

// Enum identifier
enum week
{
    Mon = 10,
    Tue,
    Wed,
    Thur,
    Fri = 10,
    Sat = 16,
    Sun
};

int main()
{
    // variable identifier
    int marks1 = 50, marks2 = 60;
    float avg = (float)(marks1 + marks2) / 2;

    printf("print %f and average %f\n", avg, average(3, 6));

    printf("Student 1 is %s and student 2 is %s\n", s1.name, s2.name);

    // Label identifier
    int x = 0;
begin:
    x++;
    if (x >= 10)
        goto end;
    printf("%d\n", x);
    goto begin;

end:

    printf("The value of enum week: %d\n", Thur);
    return 0;
};
