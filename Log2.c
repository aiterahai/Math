#include <stdio.h>
#include <math.h>

double logB(double x, double base){
	return log(x)/log(base);
}
int main(){
	printf("log2(8) = %lf", logB(8.0, 2.0));
	return 0;
}
