#include<stdio.h>
struct student
{
    char name[50];
    int age;
};
struct student getInformation();
int main()
{
    struct student s;
    s=getInformation();
    printf("\n Displaying information\n");
    printf("Name: %s",s.name);
    printf("\n Roll: %d",s.age);
    return 0;
}
struct student getInformation()
{
    struct student s1;
    printf("Enter age:");
    scanf("%d",&s1.age);
    printf("%s",s1.name);
    return s1;
}