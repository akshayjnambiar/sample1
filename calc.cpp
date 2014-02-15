using namespace std ;
#include<stdio.h>
#include<iostream>

void calculator(float a, float b, char option) 
{
 switch(option){
  case '+':
  	cout<<a<<" + "<<b<<" = "<<a+b ;
  	break;
  case '-':
 	cout<<a<<" - "<<b<<" = "<<a-b ;
  	break;
  case  '*' :
 	cout<<a<<" * "<<b<<" = "<<a*b ;
  	break;
  case '/' :
 	cout<<a<<" / "<<b<<" = "<<a/b ;
  	break;
  default:
  	printf("Enter the correct option : ");
  
}
 cout<<endl ;
}

int main()
{
 float a, b ;
 char option;
 printf("Enter two numbers : ") ;
 scanf("%f%f",&a, &b) ;
 cin>>option ;
 calculator(a, b,  option) ;
 return 0 ;
}
