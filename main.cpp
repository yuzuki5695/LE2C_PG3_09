#include<stdio.h>
#include<Windows.h>

int Recursive(int n) {
	if (n <= 1) {
		return (1);
	}
	return (n * Recursive(n - 1));
}

int main(){

	int n = 100;
	int result;

	result = Recursive(n);
	printf("%dの階乗 = %d\n",n,result);

	return (0);
}