#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the value of n: "; cin>>n;
int i=n; //Variable to store value for output
	while(n>0)
	{
		sum+=n;
		n--;
	}
	cout<<"\n The sum of first "<<i<<" natural numbers is: "<<sum;
	return 0;
}