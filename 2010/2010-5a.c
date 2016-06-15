#include <stdio.h>

void swap(char *, char *);

int main(void){
    char c1 = 'A';
    char c2 = 'Z';
    swap(&c1, &c2);
    printf("%c %c", c1, c2);
    return 0;
}

void swap(char *c1, char *c2){
	if (*c1 != *c2){
		*c1 ^= *c2;
		*c2 ^= *c1;
		*c1 ^= *c2;
	}
}
