#include <stdio.h>
#include <stdlib.h>

int main() {
//    A bank account has a holder name (first name, middle name and last name), available amount of money (balance),
//bank name, IBAN and 3 credit card numbers associated with the account. Declare the variables needed to keep the
//information for a single bank account using the appropriate data types and descriptive names.
    
    char firstName[11] = "Konstantin";
    char middleName[13] = "Konstantinov";
    char lastName[8] = "Kirchev";
    float balance = 12135.55;
    char bankName[9] = "CCB Bank";
    char iban[28] = "BG80 BNBG 9661 1020 3456 78";
    long firstCreditCardNumber = 123134354354;
    long secondCreditCardNumber = 465134354354;
    long thirdCreditCardNumber = 832534354354;
    
    printf("Bank Account\nHolder Name: %s %s %s\nBalance: %.2f\nBank Name: %s\nIBAN: %s\nCredit Card Numbers: %d, %d, %d",
            firstName, middleName, lastName, balance, bankName, iban, firstCreditCardNumber, secondCreditCardNumber, 
            thirdCreditCardNumber);
    
    return (EXIT_SUCCESS);
}

