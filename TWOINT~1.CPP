// WAP to merge two ascending array elements into one array.
#include<iostream.h>
#include<conio.h>
#include<process.h>
void merge(int x[], int y[], int m,int n);
int main()
{
l1:
clrscr();
int i,a[20],b[20],k,l;
cout<<" To Merge Two Ascending Array Elements Into One Array "<<endl;
cout<<" Enter The Size Of Two Arrays Respectivily\n";
cin>>k>>l;
if(cin.fail()||k<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
if(cin.fail()||l<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
cout<<"\nEnter First Array In Ascending Order\n";
for(i=0;i<k;i++)
 { cin>>a[i];
 }
cout<<"\nEnter Second Array in Ascending Order\n";
for(i=0;i<l;i++)
{ cin>>b[i];
}
merge(a,b,k,l);
return 0;
}
void merge(int x[], int y[], int m,int n)
{ int g[m+n],i,j,k;
i=0,j=0,k=0;
while(i<m && j<n)
{ if(x[i]<=y[j])
  { g[k]=x[i];
  k++;
  i++;
  }
  else
  {g[k]=y[j];
  k++;
  j++;
  }
}
while(i<m)
{g[k]=x[i];
  k++;
  i++;
}
while(j<n)
{g[k]=y[j];
  k++;
  j++;
}
cout<<"\nMerged Array in Ascending Order\n";
for(i=0;i<m+n;i++)
{ cout<<" "<<g[i];
}
}
