/*****************************************************************************************
this program is conditional construct : switch case
*****************************************************************************************/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value is : ");
	scanf("%d",&a);
	switch(a){
	case 10 ... 20: printf("entered number in range  of 10 to 20 is %d\n",a);
	break;
	case 21 ... 30 : printf("entered number in range of 21 to 30 is %d\n",a);
	break;
	case 31 ... 40 : printf("entered number in range of 31 to 40 is %d\n",a);
	break;
	default : printf("entered number is out of range is %d",a);	
		
	}
	return 0;
}
