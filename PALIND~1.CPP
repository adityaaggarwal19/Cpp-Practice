//WAP to read and check a string is palindrome or not.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int i,j,k=0;
char string[50];
cout<<" To Read And Check A String Is Palindrome Or Not "<<endl;
cout<<" Enter the String:\n";
cin.getline(string,50);
int l=strlen(string)-1;
for(i=0,j=l;i<l/2;i++,j--)
{ if(string[i]==string[j])
   { k++;
   }
}
if(k==l/2)
{cout<<"\n It is Palindrome....";
}
else
cout<<"\n It is Not a Palindrome....";
getch();
}
