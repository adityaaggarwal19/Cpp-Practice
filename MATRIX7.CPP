#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
   l1:
   clrscr();
 cout<<" To Compute Sum, Maximum, Minimum, And So on.. Between Two Matrices "<<endl;
 cout<<"\nEnter Matrix Information "<<endl;
int a[20][20],i,j,sum=0,max,min,m,n,ch,sum1=0,sum2=0,yn;
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
cout<<" Enter The Columns: ";
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
{cout<<" Enter The Elements In Row: "<<i+1<<endl;
for(j=0;j<n;j++)
{cin>>a[i][j];
}
}
cout<<"\nYour Matrix Is"<<endl;
for(i=0;i<m;i++)
{cout<<"\n";
for(j=0;j<n;j++)
{cout<<" "<<a[i][j];
}
}
cout<<"\n......MENU......"<<endl;
cout<<" 1....Sum of Rows And Columns "<<endl;
cout<<" 2....Maximum And Minimum Of Matrix "<<endl;
cout<<" 3....Sum Of Minor And Major Daigonal " <<endl;
cout<<" 4....Transpose Of The Matrix "<<endl;
cout<<" 5....Sum Of Upper And Lower Triangles Of Matrix "<<endl;
cout<<" 6....Maximum And Minimum In Rows And Columns "<<endl;
cout<<" 7....Exit "<<endl;
cout<<" Enter Your Choice(1-7) "<<endl;
cin>>ch;
switch(ch)
{case 1: for(i=0;i<m;i++)
	 { sum=0;
	    for(j=0;j<n;j++)
	    { sum+=a[i][j];
			}
			cout<<"\nSum Of Row "<<i+1<< " Is "<<sum<<endl;
		 }
		 for(j=0;j<n;j++)
		 { sum=0;
		    for(i=0;i<m;i++)
		    { sum+=a[i][j];
			}
			cout<<"\nSum Of Column "<<j+1<<" Is "<<sum<<endl;
		 }
		 break;
 case 2: max=a[0][0];
	 min=a[0][0];
	 for(i=0;i<m;i++)
	 {
	  for(j=0;j<n;j++)
	  { if(a[i][j]>max)
	       {max=a[i][j];
			   }
			else
			if(a[i][j]<min)
			   { min=a[i][j];
		       }
		  }
		 }
		 cout<<"\nLargest Number In The Matrix= "<<max<<endl;
		 cout<<"Smallest Number In The Matrix= "<<min<<endl;
		 break;
 case 3: if(m==n)
	   { for(i=0;i<m;i++)
	    { for(j=0;j<n;j++)
		{ if(i==j)
		   { sum1+=a[i][j];
				   }
				   else
				   if(i+j==m-1||i+j==n-1)
				   { sum2+=a[i][j];
				   }
				}
			}
		   }
		   else
		   cout<<"\n Sum Of Daigonals Is Not Possible ";
		   if(sum1!=0)
		   {
		   cout<<"\n Sum Of Major Daigonal = "<<sum1<<endl;
		   cout<<" Sum Of Minor Daigonal = "<<sum2<<endl;
	       }
	       break;
 case 4: cout<<"\n The Transpose Of Matrix Is "<<endl;
	 for(j=0;j<n;j++)
	 {cout<<"\n";
	   for(i=0;i<m;i++)
	    {
		cout<<" "<<a[i][j];
			}
		 }
		 break;
 case 5: if(m==n)
	  { for(i=0;i<m;i++)
	     {
	       for(j=0;j<n;j++)
	       {if((i+j)<m-1)
		 {sum1+=a[i][j];
				 }
				 else
				 if((i+j)>n-1)
				  {sum2+=a[i][j];
				  }
			   }
	     }
		  }
		   else
		   cout<<"\n Sum Of Triangles Is Not Possible ";
		   if(sum1!=0&&sum2!=0)
		    {
		      cout<<"\nSum Of Upper Triangle Of Matrix Is = "<<sum1<<endl;
		      cout<<" Sum Of Lower Tringle Of Matrix Is = "<<sum2<<endl;
	    }
	    break;
 case 6: for(i=0;i<m;i++)
	  { max=min=a[i][0];
	     for(j=0;j<n;j++)
	      { if(max<a[i][j])
		 { max=a[i][j];
				 }
				else
				if(min>a[i][j])
				 {min=a[i][j];
				 }
			  }
			  cout<<"\nLargest Element In Row"<<i+1<<" Is "<<max<<endl;
			  cout<<" Smallest Element In Row"<<i+1<<" Is "<<min<<endl;
		}
		 for(j=0;j<n;j++)
	  { max=min=a[0][j];
	     for(i=0;i<m;i++)
	      { if(max<a[i][j])
		 { max=a[i][j];
				 }
				else
				if(min>a[i][j])
				 {min=a[i][j];
				 }
			  }
			  cout<<"\nLargest Element In Column"<<j+1<<" Is "<<max<<endl;
			  cout<<" Smallest Element In Column"<<j+1<<" Is "<<min<<endl;
		  }
		  break;
 case 7: exit(0);
 default : cout<<"\nEntered Wrong Choice...!!!!";
	   break;
}
cout<<"\nIf You Want To Re-Enter The Matrix Then Enter 1 "<<endl;
cin>>yn;
if(yn==1)
{main();
}
else
cout<<" ......Thank You...... "<<endl;
	getch();
}
