#include <stdio.h>
int main(){
	int n, sum;
	int i;
	int square=n*n;
	
         printf("Enter the maximum limit of numbers:");
	 scanf("%d", &i);
	for(n=0 ; n<=i ; n++){
		square=n*n;
		sum+=square;
		
	
	}
	printf("The total sum of squares of numbers starting from 0 to %d is %d:\n\n", i, sum);
	return 0;
}
