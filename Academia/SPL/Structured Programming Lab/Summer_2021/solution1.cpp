// 1. Write a program in C asking the user to enter 2 digit number, then prints the English word for it.
// Suppose you enter ’52’ the printf function prints out ’fifty-two’. Use switch statement for this
// purpose.

#include<stdio.h>

int main(){

    int n;
    printf("\nEnter 2 digit number: ");
    scanf("%d", &n);

    int firstDigit = n / 10;
    int secondDigit = n % 10;
    if(firstDigit == 1){
        switch(secondDigit){
            case 0: printf("Ten"); break;
            case 1: printf("Eleven"); break;
            case 2: printf("Twelve"); break;
            case 3: printf("thirteen"); break;
            case 4: printf("fourteen"); break;
            case 5: printf("fifteen"); break;
            case 6: printf("sixteen"); break;
            case 7: printf("seventeen"); break;
            case 8: printf("eighteen"); break;
            case 9: printf("ninteen"); break;
        }
        return 0;
    }

    switch(firstDigit){
        case 2: printf("Twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
    }

    printf("-");
    switch(secondDigit){
        case 0: break;
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
    }
    return 0;
}
