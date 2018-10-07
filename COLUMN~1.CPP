//WAP to read matrix of n1*n2 ,then sort it and reassign rowwise
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{        cout<<"\n To Read Matrix of n1*n2 ,Then Sort It And resign rowwise";
	clrscr();
	int arr[20][20];
	cout<<"\n Enter The Row Of Matrix ";
	int row;
	cin>>row;
		if(cin.fail()||row<1)
	{
		cin.clear();
		cin.ignore(100,'\n');
		cout<<" Wrong Input ";
		exit(0);
	}
	cout<<"\n Enter The Column Of Matrix ";
	int column;
	cin>>column;
		if(cin.fail())
	{
		cin.clear();
		cin.ignore(100,'\n');
		cout<<" Wrong Input ";
		exit(0);
	}
	if(row<1||column<1)
	{
		cout<<"\n Wrong Input ";
		getch();
		return;
	}
	cout<<"\n Enter The Elements Of Matrix ";
	for(int i=0;i<row;++i)
	{
		for(int j=0;j<column;++j)
		{
			cin>>arr[i][j];
		  }
	}
	cout<<"\n Elements Of Matrix Are: \n ";
	for(int k=0;k<row;++k)
	{
		for(int j=0;j<column;++j)
		{
			cout<<arr[k][j]<<"     ";
		  }
		  cout<<"\n";
	}
	int arrb[400];
	int u=0;
	for(int t=0;t<row;++t)
	{
	   for(int j=0;j<column;++j)
	       {
			arrb[u]=arr[t][j];
			++u;
	       }
	}
	int c;
	for(int b=0;b<u;++b)  //to sort temporary array
	{
	    for(int j=0;j<u-1;++j)
	    {
		if(arrb[j]>arrb[j+1])
		{
			c=arrb[j];
			arrb[j]=arrb[j+1];
			arrb[j+1]=c;
		 }
	    }
	}
	int w=0,z=-1;
	for(int g=0;g<u;++g)
	{
	   if(g%column==0)
	   {
		w=0;
		++z;
	   }
	   arr[z][w]=arrb[g];
	   ++w;
	}
	cout<<"\n Matrix After Reconstruction \n";
	for(int h=0;h<row;++h)
	{
		for(int j=0;j<column;++j)
		{
			cout<<"    "<<arr[h][j];
		}
		cout<<"\n";
	}
	getch();

}