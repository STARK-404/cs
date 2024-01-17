#include <iostream>
using namespace std;
int main()
{
int num;
cout<<" Enter a Number Between 0 and 9 ";
cin>>num;
switch(num)
{
case 0:cout<<"Zero";
break;
case 1:cout<<'One';
break;
case 2: cout<<"Two";
break;
case 3 : cout<<"Three";
break;
case 4:cout<<"Four";
break;
case 5:cout<<"Five";
break;
case 6:cout<<"six";
break;
case 7:cout<<"seven";
break;
case 8 :cout<<"Eight";
break;
case 9 :cout<<"Nine";
break;
default :
cout<<" Invalid Number , Please Type between 0 and 9";
}
return 0;
}
