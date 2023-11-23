#include <stdio.h>
#include <stdlib.h>

// Function Declaration/prototype
// Input arguments are : Fn-1 and Fn-2
// On exit: Fn and Fn-1
void fibonacci(int *a, int *b);


int main()
{
	int n,i;
	int f1=1, f0=0;
	
	printf("Enter a Positive Integer: \n");
	scanf("%d", &n);
	
	if (n<1) {
		printf("The number is not positive.\n");
		exit(1);
	}
    
	printf("The fibonacci sequence is : \n");
	printf("%d, %d , ", f0,f1);

	// Calculating for Fibonacci sequence from 2
	for (i=2; i<=n; i++){
		fibonacci(&f1, &f0);
		printf("%d, ", f1);
		
		if ((i+1)%10 == 0) printf("\n");
	}

	return 0;
}
	
void fibonacci(int *a, int *b){
	int next;
	// *a = f(n-1), *b = f(n-2) next = f(n)
	next = *a+*b;

	//*a = f(n), *b = f(n-1)
	*b = *a;
	*a = next;

}