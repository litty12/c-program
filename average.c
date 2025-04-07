#include <stdio.h>
struct student{
    char name[50];
    int roll_no;
    float marks[3];
};
int main()
{
    int n,i;
    printf("enter the number of students");
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the details of student %d\n",i+1);
        printf("name");
        scanf("%s",&stu[i].name[50]);
        printf("roll number");
        scanf("%d",&stu[i].roll_no);
        printf("enter the marks in three subjects:");
        for(int j=0;j<3;j++)
        {
            scanf("%f",&stu[i].marks[j]);
        }
    }
    printf("\n student details:\n");
    for(i=0;i<n;i++)
    {
        float total=0;
        for(int j=0;j<3;j++)
        {
            total+=stu[i].marks[j];
        }
        float average=total/3;
        printf("student:%d;name:%s,roll no%d,total marks:%2f,average marks:%2f\n",i+1,stu[i].name,stu[i].roll_no,total,average);
    }
    return 0;
}
    
