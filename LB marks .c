#include <stdio.h>

int main() {
    int marks;
    
    printf("enter the marks\n");
    scanf("%d",&marks);
    if(marks>=90)
    printf("grade A\n");
    else if(marks>=75)
    printf("grade B\n");
    else if (marks>=60)
    printf("grade C");
    else if (marks>=50)
    printf("grade D");
    else
    printf("Fail");

    return 0;
}
