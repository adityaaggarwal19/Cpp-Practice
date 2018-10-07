//WAP to read an array and then remove duplicate elements from that array.
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
void removedpl(int x[], int n)
{ int i,j,k;
 for(i=0;i<n;i++)
     {
      for(j=i+1;j<n;)
	   {
	 if(x[j]==x[i])
		  {
	    for (k=j;k<n;k++)
			 {
	       x[k]=x[k+1];
	    }
	    n--;
	 }
		 else
	  j++;
      }
   }
  cout<<"\n Array After Removing Duplicate Elements\n";
  for(i=0;i<n;i++)
 { cout<<x[i]<<" ";
}
getch();
}
int main()
{
l1:
clrscr();
cout<<" To Read An Array And Then Remove Duplicate Elements From That Array "<<endl;
 int a[100],m;
cout<<" Enter The Size Of Array\n";
cin>>m;
if(cin.fail()||m<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
cout<<"\nEnter the Array\n";
for(int i=0;i<m;i++)
 { cin>>a[i];
 }
removedpl(a,m);
return 0;
}
