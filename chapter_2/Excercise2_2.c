#include <stdio.h>

int mygetline(char s[], int lim);

int main(int argc, char *argv[])
{
	int lim=1000;
	int c,i;

	char s[lim];

	int len = mygetline(s,lim);

	printf("Line: %s\n",s);
	printf("Length: %d\n",len);
	
}

int mygetline(char s[], int limit) {
	int i;
	int length = 0;
	for (i = 0; i < limit; ++length, ++i) {
		s[i] = getchar();
		if (s[i] == '\n') {
			i = limit; // trips the loop
		}
		if (s[i] == EOF) {
			i = limit;
		}
	}
	s[length] = '\0';

	return length;
}
