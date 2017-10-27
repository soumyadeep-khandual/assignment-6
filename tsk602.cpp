#include<iostream>
using namespace std;

int main(){
int a=2,b=3,*p;
p=&a;
b=*p;
cout<<"The value of a is : "<<a<<endl<<"The value of b is : "<<b<<endl<<"The value of p is : "<<*p;
a=2;
b=3;
cout<<endl<<"The value of a is : "<<a<<endl<<"The value of b is : "<<b<<endl<<"The value of p is : "<<*p;
p=&b;
cout<<endl<<"The value of a is : "<<a<<endl<<"The value of b is : "<<b<<endl<<"The value of p is : "<<*p;




return 0;
}
