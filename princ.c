#include<stdio.h>
#include"Pi.h"

int main()
{
	float r;
	printf("Rayon ? ");
	scanf("%f",&rayon);
	printf("%f %f \n" , surface(r),circonference(r));

	return 0;
}
