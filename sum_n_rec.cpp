//WAP for sum of n natural numbers using recursion
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
int sum(int x)
{ if(x==0)
   return 0;
   else
   return x+sum(x-1);
}
int main()
{ int numb;
  cout<<" Enter the number: \n";
  cin>>numb;
  cout<<"\nSum of n natural  "<<numb<<"  numbers: "<<sum(numb);
  return 0;
}
