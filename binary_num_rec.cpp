//WAP to print the binary form of entered number using recursion
#include<iostream.h>
#include<conio.h>
#include<process.h>
int binary(int x)
{ int r;
r=x%2;
if(x<=1)
{ return x;
}
if(r==0)
{ return 0;
binary(x/2);
}
else
{return 1;
binary(x/2);
}
}
void main()
{ int numb;
cout<<" Enter The Number To Convert Into Binary\n";
cin>>numb;
cout<<"Binary form is = ";
binary(numb);
getch();
}
