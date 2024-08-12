#include <stdio.h>
#include <stdlib.h>

#include "exercises.h"
#include "exercises2.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	char str[] = "ACCBCCC";
	char str0[] = "BA";
	int a = any(str, str0);
	printf("%d", a);



	return 0;
}

