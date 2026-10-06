#include <stdio.h>
int main(){
	int mil, min, std;
	printf("Military Time: ");
	scanf("%2d", &mil);
	scanf("%2d", &min);
	
	printf("%d %d\n", mil, min);

if (mil < 0 || mil > 23 || min < 0 || min > 59){
	printf("Invalid time");
}
else if(mil == 00){
	printf("%02d:%02d AM", mil + 12,min);
}

else if( mil >= 0 && mil <=11){
	printf("%02d:%02d AM", mil,min);
}
	else if(mil == 12){
		printf("%02d:%02d PM", mil, min);
	}
	
	else if (mil >= 13 && mil <= 23)
{
	printf("%02d:%02d PM", mil - 12, min);
	
}
	
	
	
	else {
		printf("no bro");
	}
	
	
	
	
	
	
	
	
	return 0;
}
