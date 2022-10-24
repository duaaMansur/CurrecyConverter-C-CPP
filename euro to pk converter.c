
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float euro_to_pak(float a)
{

	float res = 0;

	res = 215.268 * a;

	return res;

}
float  pak_to_euro(float b) {


	float res = 0;

	res = 0.0046214* b;

	return res;



}
int main() {

	int choice;
	
	float amount, converted_amount;

	

	
	printf("Enter amount to convert: \n");
	scanf("%f", &amount);


	printf(" choice 1: convert euro to pk:\n");
	printf("choice 2: pak_to euro:");

	printf("Enter the choice for conversion\n");
	scanf("%d", &choice);


	//euro_to_pak
	if (choice == 1) {
		converted_amount = euro_to_pak(amount);
		printf("The converted amount is %f\n", converted_amount);
	}

	//EURO to PKR
	if (choice == 2)
	{
		converted_amount = pak_to_euro(amount);
		printf("The converted amount is %f\n", converted_amount);
	}


	return 0;
}