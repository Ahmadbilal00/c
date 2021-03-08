#include<iostream>
using namespace std;
int main()
{
	int int1=26;
	int int2=45;
	int *int1ptr= &int1;
	int *int2ptr= &int2;
	*int1ptr =89;
	*int2ptr =62;
	int2ptr = int1ptr;
	*int1ptr =80;
	int1 =57;
	cout<<*int1ptr<<""<<*int2ptr<<endl;
}
