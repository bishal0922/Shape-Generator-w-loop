/*
Bishal Giri
This program will repeatedly get an integer fro the user and print a rectangle of that height.
*/

#include <stdio.h>
void printRectangle();
int height;
int main()
{
printf("This program will repeatedly get an integer fro the user and print a rectangle of that height.\n");



for (int i=1;i>0;i++){
if (height>=0){
    printRectangle(height);
}
}
}
void printRectangle(int height){
    printf("Enter height: ");
scanf("%d", &height);
if (height<=0){
    printf("Bye\n");
    return 0;
}
for (int i=1; i<=height; i++){
    for (int j=1; j<=height; j++){
        printf("*");
    }
    printf("\n");
}

}

