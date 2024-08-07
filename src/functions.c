#include <stdio.h>
#include <stdlib.h>
#include "exercises.h"

void printFahrToCelsius(){ //1-3
	float fahr;
	float celsius;

	int min = 0;
	int max = 300;
	int step = 20;
	fahr = min;

	while(fahr <= max){
		celsius = (5.0 / 9.0) * (fahr -32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}

void printCelsiusToFahr(){ //1-4
	float fahr;
	float celsius;

	int min = 0;
	int max = 300;
	int step = 10;
	celsius = min;

	while(celsius <= max){
		fahr = (celsius * 9.0f/5.0f) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}

void printFahrToCelsiusForReverse(){ //1-5 reverse using for
	int fahr;
	for(fahr = UPPER; fahr >= 0; fahr -= STEP){
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr -32.0));
	}
}

void printFahrToCelsiusFor(){ // 1-5
	int fahr;
	for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr -32.0));
	}
}


