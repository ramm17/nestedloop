#include<stdio.h>
#define PI 3.14
int main()
{
    int ch;
    float l,b,h,rad,area;
    printf("Press 1 for Rectangle.\n");
    printf("Press 2 for Circle.\n");
    printf("\nPlease Choose any option:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\n\n======  Rectangle  ======\n");
        printf("Press 1 for Area of Rectangle\n");
        printf("Press 2 for Perimeter of Rectangle\n");
        printf("\nPlease choose any option:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
             printf("Enter the length and breadth of Rectangle:\n");
             scanf("%f%f",&l,&b);
             area=(l*b);
             printf("Area of Rectangle=%.2f",area);
             break;
        case 2:
              printf("Enter the length and breadth of Triangle:\n");
              scanf("%f%f",&l,&b);
              area=2*(l+b);
              printf("Perimeter of Rectangle=%.2f",area);
              break;
        }
        break;
    case 2:
        printf("\n\n======  Circle  ======\n");
        printf("Press 1 for Area of Circle\n");
        printf("Press 2 for Perimeter of Circle\n");
        printf("\nPlease choose any option:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the radius of Circle:\n");
            scanf("%f",&rad);
            area=(PI*rad*rad);
            printf("Area of Circle=%.2f",area);
            break;
            case 2:
            printf("Enter the radius of Circle:\n");
        scanf("%f",&rad);
        area=(2*PI*rad);
        printf("Perimeter of Circle=%.2f",area);
        }
        break;

    default:
        printf("Error! Please Input Invalid Option");
    }
    getch();
    return 0;
}
