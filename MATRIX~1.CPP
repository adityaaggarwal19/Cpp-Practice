#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
l1:
clrscr();
int a[20][20],b[20][20],c[20][20],m,n,p,q,i,j,k,ch,yn;
cout<<" To Add, Subtract, Multiply Two Matrices "<<endl;
cout<<"\nEnter The Matrix A Information\n";
cout<<" Enter The Rows: ";
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
l2:
cout<<"\nEnter The Columns: ";
cin>>n;
if(cin.fail()||n<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l2;
	exit(0);
}
for(i=0;i<m;i++)
{ cout<<"\nEnter The Elements Of Row "<<i+1<<endl;
    for(j=0;j<n;j++)
    {
	cin>>a[i][j];
    }
}
l3:
clrscr();
cout<<"\nEnter The Matrix B Information\n";
cout<<" Enter The Rows: ";
cin>>p;
if(p<=0)
{
	cout<<" Wrong Input Entered, Input Cannot Be 0 or Negative "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l3;
}
l4:
cout<<"\nEnter the Columns: ";
cin>>q;
if(q<=0)
{
	cout<<" Wrong Input Entered, Input Cannot Be 0 or Negative "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l4;
}
for(i=0;i<p;i++)
{ cout<<"\nEnter The Elements Of Row "<<i+1<<endl;
    for(j=0;j<q;j++)
    {
	cin>>b[i][j];
    }
}
cout<<"\n....Matrix A.....\n";
for(i=0;i<m;i++)
{ cout<<"\n";
    for(j=0;j<n;j++)
    {
	cout<<" "<<a[i][j];
    }
}
cout<<"\n....Matrix B.....\n";
for(i=0;i<p;i++)
{ cout<<"\n";
    for(j=0;j<q;j++)
    {
	cout<<" "<<b[i][j];
    }
}
cout<<"\n......Menu......\n";
cout<<" 1.....Sum Of Two Matrix "<<endl;
cout<<" 2.....Subtraction Of Two Matrix "<<endl;
cout<<" 3.....Multiplication Of Two Matrix "<<endl;
cout<<" 4.....Exit"<<endl;
cout<<" Enter Your Choice(1-4): "<<endl;
cin>>ch;
switch(ch)
{ case 1: if(m==p&&n==q)
	   {
	       for(i=0;i<m;i++)
	       {
		   for(j=0;j<n;j++)
		   {
		       c[i][j]=a[i][j]+b[i][j];
		   }
	       }
	   }
	   else
	    cout<<"\nSum Of Matrices Not Possible\n";
	    cout<<"\n Sum Of Matrices Is\n";
	   for(i=0;i<p;i++)
	   { cout<<"\n";
	     for(j=0;j<q;j++)
	     { cout<<" "<<c[i][j];
	     }
	   }
	   break;
 case 2: if(m==p&&n==q)
	   {
	       for(i=0;i<m;i++)
	       {
		   for(j=0;j<n;j++)
		   {
		       c[i][j]=a[i][j]-b[i][j];
		   }
	       }
	   }
	   else
	    cout<<"\nSubtraction Of Matrices Not Possible\n";
	    cout<<"\n Subtraction Of Matrices Is\n";
	   for(i=0;i<p;i++)
	   { cout<<"\n";
	     for(j=0;j<q;j++)
	     { cout<<" "<<c[i][j];
	     }
	   }
	   break;
	case 3:  if(n==p)
    {

	for(i=0;i<m;i++)
	{
	    for(j=0;j<q;j++)
	    {
		c[i][j]=0;
		for(k=0;k<p;k++)
		{
		    c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	    }
	}
	cout<<"\n\nMultiplication Of Matrix A And Matrix B :\n\n";

	for(i=0;i<m;i++)
	{
	    for(j=0;j<q;j++)
	    {
		cout<<" "<<c[i][j];
	    }
	    cout<<"\n\n";
	}
    }
    else
    {
	cout<<"\n\nMultiplication Is Not Possible ";
    }
    break;
    case 4: exit(0);
    default: cout<<" Entered Wrong Choice !!!!!!! "<<endl;
	     break;

}
cout<<"\nIf You Want To Re-Enter The Matrices Then Enter 1 "<<endl;
cin>>yn;
if(yn==1)
{main();
}
else
cout<<" ......Thank You...... "<<endl;
getch();
}
