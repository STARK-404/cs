#include<iostream>
using namespace std;
int main()
{
int n,rev=0,s;
cout<<"\n program to check whether number is palindrome or not\n";
cout<<"\n enter the number\n";
cin>>n;
s=n;
while(n>0)
{
rev=(rev*10)+n%10 ;
n = n/10;
}
if(rev==s)
{
cout<<"\n"<<s<<" is a palindrome \n";
}
else{
cout<<"\n <<s<< is not a palindrome \n";
}
return 0;
}
