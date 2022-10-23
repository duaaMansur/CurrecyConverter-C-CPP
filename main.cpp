#include <stdio.h>
#include <iostream>

#include "conversions.cpp"
#include "conversion.c"
using namespace std;

// The code is a mixture of both c and c++ code to make is accesible to everyone

int main() {
  int choice, cont;
  float amount, converted_amount;

  do{
    printf("Here are the choices for conversions\n");

    // Enter your conversion here
    printf("1. PKR to USD\n");
    printf("2. USD to PKR");

    printf("Enter the choice for conversion\n");
    scanf("%d", &choice);

    printf("Enter amount to convert: \n");
    scanf("%f", &amount);

    // Create a if else if condition here for your conversion and display the result
    //PKR to USD
    if (choice == 1) {
        converted_amount = pkr_to_usd(amount);
        printf("The converted amount is %f\n", converted_amount);
    }

    //USD to PKR
    if(choice == 2)
    {
      converted_amount = usd_to_pkr(amount);
      printf("The converted amount is %f\n", converted_amount);
    }

    cout << "Do you want to continue? (Y)es or (N)o: ";
    cin >> cont;

  }while(cont == 'Y' || cont == 'y');
}