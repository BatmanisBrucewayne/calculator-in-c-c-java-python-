#include<stdio.h>
#include<math.h>
int main(){
	
	float number1,number2,answer;
	char c;
	int o;

		
while(o!=8008){		
		printf("\ncalculation : ");
		scanf("%f%c%f",&number1,&c,&number2);
		switch(c){
			case '+':
				answer=number1+number2;
				break;
				
			case '-':
				answer=number1-number2;
				break;
				
			case '*':
				answer=number1*number2;
				break;
			
			case '/':
				answer=number1/number2;
				break;
			
			case '%':
				answer=(int)number1%(int)number2;
				break;
			
			case '^':
				answer=pow(number1,number2);
				break;
			
			case 'E':
			
			case 'e':
				exit(0);
				break;
		}
		printf("ANSWER : %.2f%c%.2f = %.2f",number1,c,number2,answer);
		printf("\nENTER '8008' to KILL PROCESS : ");
		scanf("%i",&o);
}
}
