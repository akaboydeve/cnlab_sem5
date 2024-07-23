#include <stdio.h>
#include <stdlib.h>

struct dob
{
    int day;
    int month;
    int year;
};

struct student_info
{
    int roll;
    char name[20];
    float cgpa;
    struct dob age;
};

void print_using_value(struct student_info s)
{
    printf("Printing using value\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("CGPA: %f\n", s.cgpa);
    printf("DOB: %d-%d-%d\n", s.age.day, s.age.month, s.age.year);
}

void print_using_address(struct student_info *s)
{
    printf("Printing using address\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("CGPA: %f\n", s->cgpa);
    printf("DOB: %d-%d-%d\n", s->age.day, s->age.month, s->age.year);
}

int main(int argc, char *argv[])
{
    struct student_info s1 = {argc > 1 ? atoi(argv[1]) : 1, "Akash", 8.5, {1, 1, 2000}};
    print_using_value(s1);
    print_using_address(&s1);
    return 0;
}