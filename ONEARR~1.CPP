//WAP to read then split 1-D array into even and odd number arrays.
#include<iostream.h>
#include<conio.h>
#include<process.h>
void split(int x[] ,int n );
int main()
{
l1:
clrscr();
int a[20],m;
cout<<" To Read Then Split 1-D Array Into Even And Odd Number Arrays "<<endl;
cout<<"\nEnter The Size Of The Array:\n";
cin>>m;
if(cin.fail()||size<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
cout<<"\nEnter The Array..\n";
for(int i=0;i<m;i++)
{ cin>>a[i];
}
split(a,m);
return 0;
}
void split(int x[] ,int n)
{int b[20],c[20],j,k=0,l=0;
for(j=0;j<n;j++)
{ if(x[j]%2==0)
   {b[k]=x[j];
   k++;
    }
    else
    {
    c[l]=x[j];
    l++;
    }
}
cout<<"\n Array Of Even Numbers\n";
for(j=0;j<k;j++)
{ cout<<b[j]<<" ";
}
cout<<"\n Array Of Odd Numbers\n";
for(j=0;j<l;j++)
{ cout<<c[j]<<" ";
}
getch();
}
