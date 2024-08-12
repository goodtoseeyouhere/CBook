#include <stdio.h>
#include <stdlib.h>

#include "exercises.h"
#include "exercises2.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	char str[] = "ABC";
	toLower(str);
	printf("%s", str);
	toUpper(str);
	printf("%s", str);
    return 0;
}

