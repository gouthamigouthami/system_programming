#include<iostream>
#include<stdlib.h>
using namespace std;
int add(int p,int q)
{
	return p+q;
}
int divi(int p,int q){
	return p/q;
	}
int multi(int a,int b)
{

	return a*b;
}
int subst(int a,int b)
{
	return a-b;
}
		
int main()
{
	int a=10,b=10;
	cout<<"welcome to calculator"<<endl;
	cout<<add( a, b)<<endl;
       cout<<divi( a,b)<<endl;
cout<<multi(a,b)<<endl;
cout<<subst(a,b)<<endl;
return 0;
}
