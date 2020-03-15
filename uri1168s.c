#include<stdio.h>
#include<stdlib.h>

int strlen(char *s);

int main()
{
	int n, i, size, count = 0;
	int leds[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	char number[100000];

	scanf("%d", &n);

	while( n >= 1){
		scanf("%s", number);
			
		size = strlen(number);
		for( i = 0; i < (size - 1); i++){
			count += leds[ number[ i ] - '0'];
		} // for fim

		printf("%d leds\n", count);
		count = 0;
		n--;
	} // while fim
	
	return 0;
}

int strlen(char *s){
	char *pt = s;

	while(*s++ != '\0');

	return (int)(s-pt);
}