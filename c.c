#include<stdio.h>
#include<iostream.h>

void calculator(float a, float b, char option) 
{
 switch(option){
  case '+':
  	printf("%f+%f=%f",a,b,a+b);
  	break;
  case '-':
  	printf("%f-%f=%f",a,b,a-b);
  	break;
  case  '*' :
  	printf("%f*%f=%f",a,b,a*b);
  	break;
  case '/' :
  	printf("%f/%f",a,b,a/b);
  	break;
  default:
  	printf("enter the correct option");
  
}}

int main()
{
 float a, b ;
 char option;
 printf("Enter two numbers") ;
 scanf("%f%f",&a, &b) ;
 printf("'add' / 'sub' / 'mul' / 'div': ");
 cin>>option ;
 calculator(a, b,  option) ;
 return 0 ;
}
