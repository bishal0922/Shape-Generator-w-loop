/*
Bishal Giri
This program will print a number of triangles of length given from the user.
*/

#include <stdio.h>
void run1();
void triangle();

int i,j,k,l,length, number, space;

int main()
{
    printf("This program will print a number of triangles of length given from the user.\n");
    run1();


}

void run1(int length, int number)
{
    int i,j,k,l;
    printf("Enter one triangle side: ");
    scanf("%d", &length);
    printf("Enter the number of triangles: ");
    scanf("%d", &number);


triangle(length);


}

void triangle(int length){
 for (i=1; i<=length; i++){

            for (int space =1; space<=(length-i); space++){
                printf(" ");
            }
            for (int j=1; j<=i; j++){
                printf("*");
            }
            printf("\n");
        }
}
