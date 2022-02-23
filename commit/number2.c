#include <stdio.h>
int main(
{
	float csc201,csc205,sta205;
	printf("What did you score in csc201: ");
	scanf("%f", &csc201);
	printf("What did you score in csc205: ");
	scanf("%f", &csc205);
	printf("What did you score in sta205: ");
	scanf("%f", &sta205);
	
	printf("The total score is %f\n",((csc201 + csc205 + sta205 )));
	printf("The average score is %f\n",((csc201 + csc205 + sta205 ) / 3));
	printf("The percentage is %f\n",(((csc201 + csc205 + sta205 ) / 300) * 100));
