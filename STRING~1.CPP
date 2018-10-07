//WAP to read a string and find vowels, words and also find frequency table.
#include<iostream.h>
#include<conio.h>
#include<string.h>
int vowel(char *x)
{
 int i,l=strlen(x),k=0;
 for(i=0;i<l;i++)
  {  if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U')
      { k++;
	  }
  }
  return k;
}
int words(char *y)
{ int i,l=strlen(y),p=1;
  for(i=0;i<l;i++)
  { if(y[i]==' ')
    { if(y[i+1]>=65&&y[i+1]<=90||y[i+1]>=96&&y[i+1]<=122)
       { p++;
	   }
	}
  }
  return p;
}
void frequency(char *z)
{ int i,l=strlen(z),b,s;
char j,k;
  for(j=65,k=96;j<=90,k<=122;j++,k++)
  { b=s=0;
    for(i=0;i<l;i++)
    { if(j==z[i])
      { b++;
	  }
	  else
	  if(k==z[i])
	  { s++;
	  }
   }
   if(b!=0)
   {cout<<"||"<<j<<" Occurs "<<b<<" Times ||"<<endl;
   }
   else
   if(s!=0)
   { cout<<"||"<<k<<" Occurs "<<s<<" Times ||"<<endl;
   }
 }
 cout<<" -------------------- ";
}
int main()
{
 clrscr();
 char a[100];
  cout<<" To Read A String And Find Vowels, Words And Also Find Frequency Table "<<endl;
  cout<<"\nEnter The String \n";
  cin.getline(a,100);
  cout<<" Vowels In The String: "<<vowel(a)<<endl;
  cout<<"\n Words In The String: "<<words(a)<<endl;
  cout<<"\n Frequency Table Of The Characters In The String: "<<endl;
  cout<<" ------------------------------------------------ "<<endl;
  cout<<" -------------------- "<<endl;
  frequency(a);
  getch();
}
