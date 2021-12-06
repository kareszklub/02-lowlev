#include <stdlib.h>
#include <stdio.h>

#include "main.h"

#define MY_CONSTANT 2
#define MY_MACRO(type, name, a, b) type name = (a) * (b);

#define il 10

typedef struct {
	int x, y;
} Point;

typedef struct {
	Point pos;
	int w, h;
	char name[10];
} Rectangle;

void func(const char str[], int a) {
	printf("from " "function: %s %d\n", str, a);
}

void pog(char* cp) {
	(*cp)--;
}

char* sus() {

	char* p = (char*) malloc(1000000000);
	if (!p)
		puts("Couldn't allocate memory");

	//int l = 68465;
	// ....
	return p;
}

int main() {
	
	MY_MACRO(int, a, 2 + MY_CONSTANT, 2);

	char b = 'b', c = 'c';
	const char s[] = "Hello world";

	int ints[il] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int *p = &a, v = *p;

	func(s, a);

	Rectangle r = { {  12, 11 }, 10, 9, "876543210" }, rs[] = { r };

	puts(sizeof(r) > 10  ? "true" : "false");

	Rectangle* rp = &r;

	puts(rp->pos.x > 10  ? "true" : "false");

	printf("characters are numbers: ");
	for (char i = 'A'; i < 'Z'; i++)
		printf("%c", i);
	printf("\n");

	printf("pointers are numbers: ");
	for (int* i = ints; i < ints + il; i++)
		printf("%d", *i);
	printf("\n");

	Rectangle* k = 0;
	k = k + 1;
	printf("%p\n", k);

	char* cp = &c - 1;
	printf("%c%c\n", b, c);
	printf("%c\n", *cp);

	pog(&b);
	printf("%c\n", b);

	char *ss = sus();
	printf("sus: %p\n", ss);
	free(ss);

	under();

	printf("x");
	int j = 10;
	loop:
	printf("d");
	if (j--)
		goto loop;
	printf("\n");

	unsigned char n = 0b11100101;
	pbin("original", n);
	pbin("or", n | 0b11);
	pbin("and", n & 0b11100000);
	pbin("left shift", n << 1);
	pbin("right shift", n >> 1);
	pbin("binary not", ~n);
	pbin("xor", n ^ 0b111);
	pbin("boolean not", !-10);
}

int _pbin(unsigned char n, char *p) {
	unsigned char s = n >> 1;
	*p = '0' + (n & 1);
	return s ? _pbin(s, p - 1) + 1 : 1;
}

void pbin(unsigned char n) {
	char arr[9];
	arr[8] = '\0';
	
	int r = 8 - _pbin(n, arr + 7);

	for (int i = 0; i < r; i++)
		printf("0");

	printf("%s\n", arr + r);
}

void under() {
	puts("hello I'm under the water please help");
}
