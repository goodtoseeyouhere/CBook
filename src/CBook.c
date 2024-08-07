#include <stdio.h>
#include <stdlib.h>
#include "exercises.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	replaceAll();
	return 0;

}

