#include<iostream>
using namespace std;
int main()
{
char a[30];
int i;
cout<<"Enter a string:";
cin>>a;
for(i=0;a[i]!='\0';++i);
cout<<"\nLength of the string '"<<a<<"' is "<<i;
return 0;
}
