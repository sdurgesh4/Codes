#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int otp,uotp;
	srand(time(0));
	otp=rand()%1000+6566;
	printf("Otp is: %d ", otp);
	printf("\nenter otp:");
	scanf("%d",&uotp);
	if(otp != uotp){
		printf("fail");
	} 
	else{
		printf("success");
	}
	return 0;
}
