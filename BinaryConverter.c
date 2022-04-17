/* Author: Dinel Anthony
*  Date: May 18th, 2021
* Purpose: To prompt the user for either a binary number, and then convert it to decimal, or the other way around
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


main(void)
{
	int choice;
	int decimal=0;
	int binary=0;

	printf("Please choose an option below:\n");
	printf("Option 1: Binary to Decimal\n");
	printf("Option 2: Decimal to Binary:");
	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("Please input a binary number: ");
		scanf("%d", &binary);
		printf("%d in decimal is %d", binary, binToDec(binary));
		return 0;
	}

	if (choice == 2)
	{
		printf("Please input a decimal: ");
		scanf("%d", &decimal);
		printf("%d in binary is %d", decimal, decToBin(decimal));
		return 0;
	}

	else
	{
		printf("what");
		return 0;
	}
}

int decToBin(int decimal)
{
	int bin=0;
	int i=1;
	int rem=0;

	while (decimal != 0)
	{
		rem = decimal % 2;
		decimal /= 2;
		bin += rem * i;
		i *= 10;
	}

	return bin;
}

int binToDec(binary)
{
	int rem = 0;
	int dec=0;
	int i = 0;

	while (binary != 0)
	{
		rem = binary % 10;
		binary /= 10;
		dec += rem * pow(2, i);
		++i;
	}

	return dec;
}