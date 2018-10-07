//WAP to create a structure of students containing the name, roll no, marks, avg. marks, read an array n of students and then calculate the average marks of subjects of all students.
#include<iostream.h>
#include<conio.h>
#include<process.h>
struct student
{ char name[100];
  int roll;
  int marks;
  float avg;
};
void main()
{
l1:
 clrscr();
 student p[100],s;
int m,n,i,j;
float sum;
cout<<" To Create A Structure of Students Containing The Name, Roll Numbner, Marks, Average Marks, Read An Array n Of Students And Then Calculate The Average Marks Of Subjects Of All Students "<<endl;
cout<<" Enter the Number of Students:\n ";
cin>>n;
if(cin.fail()||n<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
l2:
cout<<" Enter the Number of Subject \n ";
cin>>m;
if(cin.fail()||m<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l2;
	exit(0);
}
for(i=0;i<n;i++)
 { sum=0;
 cout<<"\n\nEnter the Information of Student "<<i+1<<"\n";
 cout<<"Name: ";
   cin>>p[i].name;
 cout<<"\nRoll Number:";
   cin>>p[i].roll;
   cout<<"\nEnter Marks of "<<m<< " Subjects:\n";
   for(j=0;j<m;j++)
   {  cin>>p[j].marks;
    sum+=p[j].marks;
   }
   s.avg=sum/m;
   cout<<"\nAverage Marks of the Student "<<p[i].name<<" has Roll Number "<<p[i].roll<<" is "<<s.avg;
 }
getch();
}
