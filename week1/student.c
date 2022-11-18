#include <stdio.h>
int main(){
    int test,exam,ass;
    float grade;
    printf("enter the marks scored by students");
    printf("\nin written test =");
    scanf("%d",&test);
    printf("\nLab exams=");
    scanf("%d",&exam);
    printf("\nAssignments =");
    scanf("%d",&ass);
    grade=((test*exam)/100+(exam*20)/100+(ass*10)/100);
    printf("Grade of the Student is :%f\n",grade);

    }