#include<iostream>
using namespace std;
int main()
{int a=-1,b=1,c,n;
cout<<"\n enter numbers of terms in the series \n";
cin>>n;
for (int i=1;i<=n;i++)
{
c=a+b;
cout<<"\t"<<c;
a=b;
b=c;
}
return 0;
}
