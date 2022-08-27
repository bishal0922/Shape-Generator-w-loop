/*
Bishal Giri
This program print a number of triangles of length given from the user.
*/

#include <stdio.h>
void run1();
int main()
{
    printf("This program will print a number of triangles of length given from the user.\n");
    run1();
    run1();

}

void run1(int length, int number)
{
    printf("Enter one triangle side: ");
    scanf("%d", &length);
    printf("Enter the number of triangles: ");
    scanf("%d", &number);

    for (int j=1; j<=number; j++)
    {
        for (int r=1; r<=length; r++)
        {

            for (int space =1; space<=(length-r); space++)
            {
                printf(" ");
            }
            for (int c=1; c<=r; c++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}
