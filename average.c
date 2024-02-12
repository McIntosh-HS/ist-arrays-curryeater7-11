#include <stdio.h>

int main(){
    int scores[6];
    int average;
    int i = 0;
    
loop: 
    printf("Enter 1 integer: ");
    scanf("%i", &scores[i]);
    if(i < 6) {    
        i = i + 1;
        goto loop; 
    }

    average = (scores[0] + scores[1] + scores[2] + scores[3] + scores[4] + scores[5]) / 6;    
    printf("The average is: %d\n", average);

    return 0;
}
