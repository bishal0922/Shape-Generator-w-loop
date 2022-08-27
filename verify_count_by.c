/*
Bishal Giri
This program will verify you can count by a certain step.
*/

#include <stdio.h>
int start, end, countBy, ans;
void verify_count();
int main(){

printf("This program will verify you can count by a certain step.\n");
printf("You will have to solve 3 problems (the functions will be called 3 times)\n");

verify_count();
verify_count();
verify_count();
printf("Bye");
}


void verify_count(int start, int end, int countBy){
printf("\nEnter what you want to start, end and step values to be.\n");

printf("start is: ");
scanf("%d", &start);
printf("end is: ");
scanf("%d", &end);
printf("step is: ");
scanf("%d", &countBy);
printf("Enter the numbers (starting with %d):\n",start);

for(int i=start; i<=end; i=i+countBy){
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans==i){
        printf("Correct\n");
    } else{
     printf("Wrong. The correct answer was: %d\n",i);
    }
}

}
