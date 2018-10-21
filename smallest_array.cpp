#include<iostream>
using namespace std;

int smallest(int a[])
{
	int small=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]<=small)
		{
			small=a[i];
		}
	}
	
	return small;
}
int main()
{
	int a[100],l,n;
	cout<<"Enter the number of elements in an array ";
	cin>>n;
	cout<<"\nEnter the elements of an array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	l=smallest(a);
	cout<<"\nSmallest number in an array is "<<l;
	return 0;
}
