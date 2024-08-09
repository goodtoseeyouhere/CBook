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

void inputToOuput(){
	int c;
	printf("The value of EOF is: %d\n", EOF);
	while((c = getchar()) != EOF){
		putchar(c);
	}
}

void countCharacters(){ // book
	int nc;
	for(nc = 0; getchar() != EOF; nc++);
	printf("%d", nc);
}

void myCountCharacters(){ // me
	int nc = 0;
	while((getchar() != EOF)){
		nc++;
	}
	printf("Total characters: %d\n", nc);
}

void countLines(){
	int c;
	int nc = 0;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			nc++;
		}
	}
	printf("Total lines : %d\n", nc);
}

void countAll(){ // 1-8
	int c;
	int newLines = 0;
	int blanks = 0;
	int tabs = 0;

	while((c = getchar()) != EOF){
		if(c == '\n'){
			newLines++;
		}
		else if(c == ' '){
			blanks++;
		}
		else if(c == '\t'){
			tabs++;
		}
	}
	printf("Total of new lines: %d\n", newLines);
	printf("Total of blanks: %d\n", blanks);
	printf("Total of tabs: %d\n", tabs);
}

void removeSpaces(){ // 1-9
	int c;
	int prevChar = EOF;
	while((c = getchar()) != EOF){
		if(c != ' ' || prevChar != ' '){
			putchar(c);
		}
		prevChar = c;
	}
}

void replaceAll() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\n') {
            putchar('\\');
            putchar('n');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
}

void countAllWords(){ // from book
	int c, nc, nw, nl, state;
	state = OUT;
	nc = nw = nl = 0;
	while((c = getchar()) != EOF){
		nc++;
		if(c == '\n'){
			nl++;
		}
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			nw++;
		}
	}
	printf("%d %d %d", nc, nl, nw);
}

void printOneWordPerLine(){
	int c, state;
	state = OUT;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}
		while(state == OUT){
			putchar(c);
			break;
		}
	}
}
