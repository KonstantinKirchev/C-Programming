#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char number[4];
    printf("Please enter a number in the range[0...999]: ");
    scanf("%s", number);
    int num;
    int num1;
    int num2;
    int num3;
    
    if (strlen(number) == 1) {
        num = strtol(number, (char **)NULL, 10);
        switch(num){
            case 1:printf("One");break;
            case 2:printf("Two");break;
            case 3:printf("Three");break;
            case 4:printf("Four");break;
            case 5:printf("Five");break;
            case 6:printf("Six");break;
            case 7:printf("Seven");break;
            case 8:printf("Eight");break;
            case 9:printf("Nine");break;
        }
    }
    else if (strlen(number) == 2) {
        num = strtol(number, (char **)NULL, 10);
        
        num1 = (num / 10) % 10;
        num2 = num % 10;
             
        if (num2 == 0) {
            switch(num1){
                case 1:printf("Ten");break;
                case 2:printf("Twenty");break;
                case 3:printf("Thirty");break;
                case 4:printf("Forty");break;
                case 5:printf("Fifty");break;
                case 6:printf("Sixty");break;
                case 7:printf("Seventy");break;
                case 8:printf("Eighty");break;
                case 9:printf("Ninety");break;
            }
        }
        else if (num2 != 0 && num1 == 1) {
            switch(num2){
                case 1:printf("Eleven");break;
                case 2:printf("Twelve");break;
                case 3:printf("Thirteen");break;
                case 4:printf("Fourteen");break;
                case 5:printf("Fifteen");break;
                case 6:printf("Sixteen");break;
                case 7:printf("Seventeen");break;
                case 8:printf("Eighteen");break;
                case 9:printf("Nineteen");break;
            }
        }
        else if (num1 >= 2 && num2 != 0) {
            switch(num1){
                case 2:printf("Twenty ");break;
                case 3:printf("Thirty ");break;
                case 4:printf("Forty ");break;
                case 5:printf("Fifty ");break;
                case 6:printf("Sixty ");break;
                case 7:printf("Seventy ");break;
                case 8:printf("Eighty ");break;
                case 9:printf("Ninety ");break;
            }
            switch(num2){
                case 1:printf("one");break;
                case 2:printf("two");break;
                case 3:printf("three");break;
                case 4:printf("four");break;
                case 5:printf("five");break;
                case 6:printf("six");break;
                case 7:printf("seven");break;
                case 8:printf("eight");break;
                case 9: printf("nine"); break;
            }
        }
    }
    else if (strlen(number) == 3) {
        num = strtol(number, (char **)NULL, 10);
        
        num1 = (num / 100) % 10;
        num2 = (num / 10) % 10;
        num3 = num % 10;
        
        if (num2 == 0 && num3 == 0) {
            switch(num1){
                case 1:printf("One hundred");break;
                case 2:printf("Two hundred");break;
                case 3:printf("Three hundred");break;
                case 4:printf("Four hundred");break;
                case 5:printf("Five hundred");break;
                case 6:printf("Six hundred");break;
                case 7:printf("Seven hundred");break;
                case 8:printf("Eight hundred");break;
                case 9:printf("Nine hundred");break;
            }
        }
        else if (num2 == 0 && num3 != 0) {
            switch(num1){
                case 1:printf("One hundred and ");break;
                case 2:printf("Two hundred and ");break;
                case 3:printf("Three hundred and ");break;
                case 4:printf("Four hundred and ");break;
                case 5:printf("Five hundred and ");break;
                case 6:printf("Six hundred and ");break;
                case 7:printf("Seven hundred and ");break;
                case 8:printf("Eight hundred and ");break;
                case 9:printf("Nine hundred and ");break;
            }
            switch(num3){
                case 1:printf("one");break;
                case 2:printf("two");break;
                case 3:printf("three");break;
                case 4:printf("four");break;
                case 5:printf("five");break;
                case 6:printf("six");break;
                case 7:printf("seven");break;
                case 8:printf("eight");break;
                case 9:printf("nine");break;
            }
        } 
        else if (num2 == 1 && num3 != 0) {
            switch(num1){
                case 1:printf("One hundred and ");break;
                case 2:printf("Two hundred and ");break;
                case 3:printf("Three hundred and ");break;
                case 4:printf("Four hundred and ");break;
                case 5:printf("Five hundred and ");break;
                case 6:printf("Six hundred and ");break;
                case 7:printf("Seven hundred and ");break;
                case 8:printf("Eight hundred and ");break;
                case 9:printf("Nine hundred and ");break;
            }
            switch(num3){
                case 1:printf("eleven");break;
                case 2:printf("twelve");break;
                case 3:printf("thirteen");break;
                case 4:printf("fourteen");break;
                case 5:printf("fifteen");break;
                case 6:printf("sixteen");break;
                case 7:printf("seventeen");break;
                case 8:printf("eighteen");break;
                case 9:printf("nineteen");break;
            }
        }
        else if (num2 > 1 && num3 != 0) {
            switch(num1){
                case 1:printf("One hundred and ");break;
                case 2:printf("Two hundred and ");break;
                case 3:printf("Three hundred and ");break;
                case 4:printf("Four hundred and ");break;
                case 5:printf("Five hundred and ");break;
                case 6:printf("Six hundred and ");break;
                case 7:printf("Seven hundred and ");break;
                case 8:printf("Eight hundred and ");break;
                case 9:printf("Nine hundred and ");break;
            }
            switch(num2){
                case 2:printf("twenty ");break;
                case 3:printf("thirty ");break;
                case 4:printf("forty ");break;
                case 5:printf("fifty ");break;
                case 6:printf("sixty ");break;
                case 7:printf("seventy ");break;
                case 8:printf("eighty ");break;
                case 9:printf("ninety ");break;
            }
            switch(num3){
                case 1:printf("one");break;
                case 2:printf("two");break;
                case 3:printf("three");break;
                case 4:printf("four");break;
                case 5:printf("five");break;
                case 6:printf("six");break;
                case 7:printf("seven");break;
                case 8:printf("eight");break;
                case 9:printf("nine");break;
            }
        } 
    }
    return (EXIT_SUCCESS);
}

