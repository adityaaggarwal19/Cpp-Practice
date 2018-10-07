#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
l1:
  clrscr();
  int a[100],n,l,b,ch,i,j,mid,mins,maxs,f=0,f1=0,li=0,bi=0;
  cout<<" To Compare Between Binary And Linear Search "<<endl;
  cout<<" Enter The Size Of Array ";
  cin>>n;
  if(cin.fail()||n<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
cout<<" Enter The Elements Of Array in Ascending Order\n ";
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
cout<<"\n......Binary Search....\n";
cout<<"\n Enter The Number You Want to Search: "<<endl;
cin>>b;
mins=0;
maxs=n-1;
while((mins<=maxs)&&!(f1))
{
bi++;
mid=(mins+maxs)/2;
cout<<" Comparing Number "<<b<<" With "<<a[mid]<<" At Position "<<mid+1<<endl;
if(b>a[mid])
{ cout<<" Not Found.!!!"<<endl;
mins=mid+1;
}
else
if(b<a[mid])
{ cout<<" Not Found...!!!"<<endl;
maxs=mid-1;
}
else
{
cout<<" Found :) "<<endl;
f1++;
}
}
if(f1==0)
{ cout<<" Not found "<<endl;
}
else
{ cout<<" Number is Found at Position "<<mid+1<<endl;
}
cout<<"\n....Linear Search....\n";
cout<<" Enter The Number You Want To Search\n";
cin>>l;
for(i=0;i<n;i++)
{
li++;
cout<<" Comparing Number "<<l<<" With "<<a[i]<<" At Position "<<i+1<<endl;
if(a[i]!=l)
{ cout<<" Not Equal..!!"<<endl;
}
else
if(a[i]==l)
{ cout<<" Equal :)"<<endl;
 f=1;
break;
}
}
if(f==0)
{ cout<<" Number Not Found\n";
}
else
cout<<" Location of The Number is = "<<i+1;
if(bi==li)
{ cout<<"\n....Both Search is Better.......";
}
else
if(bi<li)
{cout<<"\n.......Binary Search is Better.....";}
else
cout<<"\n .....Linear Search is Better ......";
getch();
}
