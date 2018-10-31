#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float l,d,t,n1;
    float n;
    cin>>l;
    cin>>d;
    t=d/0.5;
    n=t/l;
    n1=ceil(n);
    cout<<n1;
    return 0;
}