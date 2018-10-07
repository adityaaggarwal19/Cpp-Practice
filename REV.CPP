#include<iostream.h>
#include<conio.h>
void main()
{
char num;
int reverse=0;
l1:
clrscr();
cout<<" To Reverse A Number "<<endl;
cout<<"\nEnter The Number= ";
cin>>num;
if((num<=0)||((num>=65)&&(num<=90))||((num>=97)&&(num<=122)))
{
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
}
while(num>0)
{
	reverse=(reverse*10)+(num%10);
	num/=10;
}

cout<<" On Reversing Number Will Be= "<<reverse;
getch();
}