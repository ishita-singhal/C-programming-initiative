/* Changed int main to void main*/
#include <stdio.h>
void main()
{
	int number1;
	int number2;
	int number3;
	
	printf("Enter number 1\n");
	scanf("%d",&number1);
	
	printf("Enter number 2\n");
	scanf("%d",&number2);
	
	printf("Difference of the above numbers is:\n");
	number3=number1-number2;
	printf("%d",number3);
	
	
}
