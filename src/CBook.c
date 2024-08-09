#include <stdio.h>
#include <stdlib.h>
#include "exercises.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	printOneWordPerLine();
	return 0;

}

