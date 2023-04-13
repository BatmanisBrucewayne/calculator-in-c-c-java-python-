#include<bits/stdc++.h>
using namespace std;

float add(float a,float b){

	return a+b;
}

float sub(float a,float b){

	return a-b;
}

float mul(float a,float b){

	return a*b;
}

float div(float a,float b){

	return a/b;
}

int mod(int a,int b){

	return a%b;
}

int main(){
   float a,b;
   char c;
   int o;
   while(o!=8008){
   	cout<<"ENTER CALCULATION : ";
   	cin>>a>>c>>b;
   	switch(c){
   		case '+':
   			cout<<add(a,b);
   			break;
   		case '-':
   			cout<<sub(a,b);
   			break;
   		case '*':
   			cout<<mul(a,b);
   			break;
   		case '/':
   			cout<<div(a,b);
   			break;
   		case '%':
   			cout<<mod(int(a),int(b));
   			break;
   		case '^':
   			cout<<pow(a,b);
   			break;
	   }
	   cout<<endl<<"ENTER 8008 TO KILL PROCESS OR 0 TO CONTINUE : "<<endl;
	   cin>>o;
   }	
}
