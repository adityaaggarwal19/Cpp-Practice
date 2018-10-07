#include<iostream.h>
#include<conio.h>
#include<process.h>
void sort(int arr[][10],int rows,int col);
void main()
{
int n1,n2,arr[10][10];
l1:
clrscr();
cout<<" To Sort A Matrix Using Row MAjor "<<endl;
cout<<" Enter Number of Rows: ";
cin>>n1;
if(cin.fail()||n1<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
l2:
cout<<" Enter Number of Columns: ";
cin>>n2;
if(cin.fail()||n2<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l2;
	exit(0);
}
cout<<" Enter Elements Into "<<n1<<"  X "<<n2<<" Matrix ";
for(int i=0;i<n1;i++)
{
	for(int j=0;j<n2;j++)
	{
		cin>>arr[i][j];
	}
}
sort(arr,n1,n2);
getch();
}

void sort(int arr[][10],int rows,int col)
{
int mat[10][10],temp;
for(int i=0;i<rows;i++)
{
	for(int j=0;j<col;j++)
	{
		for(int k=j+1;k<col;k++)
		{
			if(arr[i][j]>arr[i][k])
			{
				temp=arr[i][j];
				arr[i][j]=arr[i][k];
				arr[i][k]=temp;
			}
		}
	}
}
cout<<"\nAfter Sorting (Using Row Major Approach)\n";
for(i=0;i<rows;i++)
{
	for(int j=0;j<col;j++)
	{
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}
getch();
}



