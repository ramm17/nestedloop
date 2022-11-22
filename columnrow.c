#include<stdio.h>
#include<conio.h>
int main()
{
    int r,i,j;
    printf("Enter the no. of rows to print pattern:");
    scanf("%d",&r);
    for(i=r;i>=1;i--)//row
    {
        for(j=1;j<=i;j++)//column
        {

            printf("$");
        }
        printf("\n");
    }
    getch();
    return 0;
}

