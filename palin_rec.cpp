//WAP to check the entered sting is palindrome or not using recursion 
#include<iostream.h>
#include<conio.h>
#include <stdio.h>
#include <process.h>
#include<string.h>
int palindrome(char *w,int l,int r);
void main ()
{
int left=0,right,result=0;
char word[20];
cout<<"Enter the string to check:\n";
gets(word);
right=strlen(word)-1;
result = palindrome (word,left,right);
if(result==1)
{ cout<<"\n It is Palindrome";
}
else
cout<<"\n Not A Palindrome";
getch();
}
int palindrome (char *w, int l, int r)
{
if (r<=l) 
{
return 1;
}
else if (w[l]!=w[r])
{
return 0;
}
else
{
palindrome (w, (l+1), (r-1));
}
}
