#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "exercises2.h"

void toUpper(char str1[]) {
	int i = 0;
	while (str1[i] != '\0') {
		if (str1[i] >= 'a' && str1[i] <= 'z') {
			str1[i] = str1[i] - ('a' - 'A');
		}
		i++;
	}
}

void toLower(char str1[]) {
	int i = 0;
	while (str1[i] != '\0') {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] = str1[i] + ('a' - 'A');
		}
		i++;
	}
}

void squeeze(char s[], int c) {
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++) {
		if (s[i] != c) {
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
}

void mySqueeze(char str1[], char str2[]) {
	int i, j, k;
	for(i = k = 0; str1[i] != '\0'; i++){
		for(j = 0; str2[j] != '\0'; j++){
			if(str1[i] == str2[j]){
				break;
			}
		}
		if(str2[j] == '\0'){
			str1[k] = str1[i];
			k++;
		}
	}
	str1[k] = '\0';
}


int any(char str1[], char str2[]){
	int i, j;

	for(i = 0; str1[i] != '\0'; i++){
		for(j = 0; str2[j] != '\0'; j++){
			if(str1[i] != str2[j]){
				return i;
			}
		}
	}
	return -1;
}






