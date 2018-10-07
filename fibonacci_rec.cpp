//WAP to display fibonicces series till entered no. using recursion
#include<iostream.h>
#include<conio.h>
void fib(int lim, int l, int n)
{ int sum=0; 
if(n>lim)
{ cout<<" ";
}
if(n<=lim)
{ cout<<n<<" ";
sum=l+n;
l=n;
n=sum;
fib(lim,l,n); 
}
}
void main()
{ int numb,limit,last=0,next=1;
cout<<" Enter the no. till you want fibonicces series:\n";
cin>>numb;
limit=numb;
cout<<"Your fibonicces series is:\n";
cout<<"0 ";
fib(limit,last,next);
getch();
}
