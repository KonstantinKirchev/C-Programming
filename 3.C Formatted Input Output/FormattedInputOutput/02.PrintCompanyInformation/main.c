#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

int main() {
    char companyName[BUFFER_SIZE];
    char companyAddress[BUFFER_SIZE];
    char phoneNumber[BUFFER_SIZE];
    char faxNumber[BUFFER_SIZE];
    char webSite[BUFFER_SIZE];
    char managerFirstName[BUFFER_SIZE];
    char managerLastName[BUFFER_SIZE];
    char managerAge[BUFFER_SIZE];
    char managerPhone[BUFFER_SIZE];
    
    printf("Company name: ");
    fgets(companyName, BUFFER_SIZE, stdin);
    printf("Company address: ");
    fgets(companyAddress, BUFFER_SIZE, stdin);
    printf("Phone number: ");
    fgets(phoneNumber, BUFFER_SIZE, stdin);
    printf("Fax number: ");
    fgets(faxNumber, BUFFER_SIZE, stdin);
    printf("Web site: ");
    fgets(webSite, BUFFER_SIZE, stdin);
    printf("Manager first name: ");
    fgets(managerFirstName, BUFFER_SIZE, stdin);
    printf("Manager last name: ");
    fgets(managerLastName, BUFFER_SIZE, stdin);
    printf("Manager age: ");
    fgets(managerAge, BUFFER_SIZE, stdin);
    printf("Manager phone: ");
    fgets(managerPhone, BUFFER_SIZE, stdin);
    
    if (companyName[0] == '\n') {
        strcpy(companyName, "(no company name)\n");
    }
    if (companyAddress[0] == '\n') {
        strcpy(companyAddress, "(no company address)\n");
    }
    if (phoneNumber[0] == '\n') {
        strcpy(phoneNumber, "(no phone)\n");
    }
    if (faxNumber[0] == '\n') {
        strcpy(faxNumber, "(no fax)\n");
    }
    if (webSite[0] == '\n') {
        strcpy(webSite, "(no web site)\n");
    }
    if (managerFirstName[0] == '\n') {
        strcpy(managerFirstName, "(no manager first name)");
    }
    if (managerLastName[0] == '\n') {
        strcpy(managerLastName, "(no manager last name)");
    }
    if (managerAge == 0) {
        strcpy(managerAge, "(no manager age)");
    }
    if (managerPhone[0] == '\n') {
        strcpy(managerPhone, "(no manager phone)");
    }
    
    strtok(managerFirstName, "\n");
    strtok(managerLastName, "\n");
    strtok(managerAge, "\n");
    strtok(managerPhone, "\n");
    
    printf("\n%sAddress: %sTel. %sFax: %sWeb site: %sManager: %s %s (age: %s, tel. %s)",
            companyName, companyAddress, phoneNumber, faxNumber, webSite, managerFirstName,
            managerLastName, managerAge, managerPhone);
    
    return (EXIT_SUCCESS);
}

