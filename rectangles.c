/*
Bishal Giri
This program will display a full and an empty square given the side length.
*/

#include <stdio.h>
void fullBar(int length);
void emptyBar(int length);
int length;

int main(){
printf("This program will display a full and an empty square given the side length.\n");
printf("Enter the side length: ");
scanf("%d", &length);


   for (int i=1; i<=length; i++){
        printf("*");
    }
    printf(" ");
    for (int i=1; i<=length; i++){
        printf("*");
    }
    for (int l=1; l<=(length-2); l++){
        printf("\n");
        for (int j=1; j<=length; j++){
            printf("*");
        }
        for (int j=1; j<=1; j++){
            printf(" ");
        }
        for (int j=1; j<=1; j++){
            printf("*");
        }
        for (int k=1; k<=(length-2);k++){
            printf(" ");
        }
        for (int j=1; j<=1; j++){
            printf("*");
        }
    }
    printf("\n");
for (int i=1; i<=length; i++){
        printf("*");
    }
    printf(" ");
    for (int i=1; i<=length; i++){
        printf("*");
    }

printf("\nBye");
}

void fullBar(int length){
    for (int i=1; i<=length; i++){
        for (int j=1; j<=length; j++){
            printf("*");
        }
        printf("\n");
    }


}

void emptyBar (int length){
    for (int i=1; i<=length; i++){
        printf("*");
    }
    for (int l=1; l<=(length-2); l++){
        for (int j=1; j<=1; j++){
            printf("\n*");
        }
        for (int k=1; k<=(length-2);k++){
            printf(" ");
        }
        for (int j=1; j<=1; j++){
            printf("*");
        }
    }
    printf("\n");
 for (int m=1; m<=length; m++){
        printf("*");
    }

}
