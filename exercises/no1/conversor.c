#include <stdio.h>

int main() {
	// USD to BRL conversor - We will assume 1USD == 5.30BRL
	
	double usd; //Using double for increased precision 
	
	
	printf("Type the amount in USD you want to convert to BRL\n$");
		scanf("%lf", &usd);
	
	double brl = usd*5.30;
	
	printf("The amount of %.2lfUSD equals to %.2lfBRL\n", usd, brl); 

	return 0;
}
