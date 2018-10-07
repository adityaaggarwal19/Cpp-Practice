//WAP to search a entered number from an array of elements using binary search (using recursion)
#include<iostream.h>
#include<conio.h>
#include<process.h>
int bin(int a[], int low, int upp, int s )
{ 
if(low<=upp)
{int mid=(low+upp)/2;
if(s>a[mid])
{
bin(a,mid+1,upp,s);
}
else if(s<a[mid])
{ 
bin(a,low,mid-1,s);
}
else if(s==a[mid])
{ return mid+1;
}
}
else
return -1;
}
void main()
{ int a[100],min,max,n,b;
cout<<"Enter the size of array:\n";
cin>>n;
cout<<"\nEnter the array in ascending order\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"enter the no. to be searched\n";
cin>>b;
min=0,max=n-1;
int result=bin(a,min,max,b);
if(result==-1)
{ cout<<"\nNo. is not in array....!!!!";
}
else
cout<<"\n Number is found in position= " <<result;
getch();
}
