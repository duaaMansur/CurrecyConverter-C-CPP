#include <stdio.h>
#include <iostream>

#include "conversions.cpp"
using namespace std;

// The code is a mixture of both c and c++ code to make is accesible to everyone

int main() {
  int choice;
  char cont;
  float amount, converted_amount;

  do{
    printf("Here are the choices for conversions\n");

    // Enter your conversion here
    printf("1. PKR to USD\n");
    printf("2. USD to PKR\n");
    printf("3. EUR to PKR:\n");
    printf("4. PKR to EUR:\n");

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

    if (choice == 3) {
      converted_amount = euro_to_pak(amount);
      printf("The converted amount is %f\n", converted_amount);
    }

    //EURO to PKR
    if (choice == 4)
    {
      converted_amount = pak_to_euro(amount);
      printf("The converted amount is %f\n", converted_amount);
    }

    cout << "Do you want to continue? (Y)es or (N)o: ";
    cin >> cont;
    
  }while(cont == 'Y' || cont == 'y');
}
