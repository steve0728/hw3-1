#include<stdio.h>
#include<stdlib.h>


double power(double, int);

int main(void){

	int k;
	double ans;

	printf("�p��3.5��k����?,k=");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
	system("pause");
	return 0;

}

double power(double x, int n){
	int i;
	double c = 1;

	for (i = 1; i <= n; i++){
		c = c*x;
	}
	return c;
}