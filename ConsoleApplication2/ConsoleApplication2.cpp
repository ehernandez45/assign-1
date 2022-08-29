#include <string.h>
#include <iostream>
void trim(char str[]) {
	int l = strlen(str);
	if (str[l - 1] == '\n') {
		str[l - 1] = 0;
	}

}
int main() {
	char str[128] = { 0 };

	printf("enter a filename:");
	fgets(str, 127, stdin);
	trim(str);

	FILE* fp = fopen(str, "r");

	if (fp == NULL) {
		printf("Could not open the file. \n");
		return 1;
	}
	while (fgets(str, 128, fp)) {
		printf("%s", str);
	}
	return 0;
}
