#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "exercises2.h"

void toUpper(char str1[]) {
	int i = 0;
	while(str1[i] != '\0'){
		if(str1[i] >= 'a' && str1[i] <= 'z'){
			str1[i] = str1[i] - ('a' - 'A');
		}
		i++;
	}
}

void toLower(char str1[]){
	int i = 0;
	while(str1[i] != '\0'){
		if(str1[i] >= 'A' && str1[i] <= 'Z'){
			str1[i] = str1[i] + ('a' - 'A');
		}
		i++;
	}
}

