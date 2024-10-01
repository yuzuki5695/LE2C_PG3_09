#include<stdio.h>
#include<Windows.h>

int Recursive(int n) {
	
	if (n <= 1) {
		return (1);
	}

	return (Recursive(n - 1) * 2 - 50);
}

int main(){

	int n =	5;
	int result;

	result = Recursive(n);
	printf("%dの階乗 = %d\n",n,result);

	return (0);
}