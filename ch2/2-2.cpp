#include<stdio.h> 
int main()
{
	int a, b,c;
	int n,sum = 0;
	scanf("%d %d %d", &a, &b,&c);
    for (n = 10; n <= 100; n++){
		if (n % 3 == a && n % 5 == b && n % 7 == c) {
			sum = n;
			break;
		}
    }
	if (n > 100)
		printf("No answer");
	else
		printf("%d", sum);
	return 0;
}
