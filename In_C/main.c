#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */

/* Structure declaration */
struct student_college_detail{
    int college_id;
    char college_name[50];
};
struct student_detail{
    int id;
    char name[20];
    float percentage;
    // structure within structure
    struct student_college_detail clg_data;
} stu_data;

struct Date{
    int day;
    int month;
    int year;
};
struct Time{
    int hours;
    int min;
    int sec;
};
struct DateAndTime{
    struct Date eventDate;
    struct Time eventTime;
}; // nested struct


int main()
{
    struct student_detail stu_data = {1, "Raju", 90.5, 71145,"Anna University"};

    printf(" Id is: %d \n", stu_data.id);
    printf(" Name is: %s \n", stu_data.name);
    printf(" Percentage is: %f \n\n", stu_data.percentage);

    printf(" College Id is: %d \n",stu_data.clg_data.college_id);
    printf(" College Name is: %s \n",stu_data.clg_data.college_name);
      
    /* Initializing Global Variables */

    /* struct variable declaration */
    struct DateAndTime event1 = {{5, 5, 22}, {12, 50, 01}};
    struct DateAndTime event2 = {{6, 6, 22}, {13, 55, 02}};

    printf("The Date of the event1 is %d/%d/%d at %d:%d:%d\n", event1.eventDate.day, event1.eventDate.month, event1.eventDate.year, event1.eventTime.hours, event1.eventTime.min, event1.eventTime.sec);
    printf("The Date of the event2 is %d/%d/%d at %d:%d:%d\n", event2.eventDate.day, event2.eventDate.month, event2.eventDate.year, event2.eventTime.hours, event2.eventTime.min, event2.eventTime.sec);
    return 0;
}