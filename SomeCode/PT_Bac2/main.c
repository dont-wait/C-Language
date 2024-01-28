#include <stdio.h>
#include <stdlib.h>

//viết pt bậc 1
//I: nhập vào x
//P y = f(x) = ax + b
//O in ra y
int getExperiment(int x);

int main(int argc, char *argv[]) {
	int a, b;
	printf("This program will give you Experiment of PT ba^.c 1\n");
	printf("Input a,b: ");
	scanf("%d%d", &a, &b);	
	printf("Nghie^.m cu?a PT ba^.c 1 la`: %d", getExperiment(a));
	return 0;
}
int getExperiment(int x){

	x = (-b)/a;
}