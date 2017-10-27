#include<iostream>
using namespace std;

int main(){
int a,*w;
bool b,*x;
double c,*y;
float d,*z;
char e,*u;
long f,*v;
cout<<"The size of normal integer variable : "<<sizeof(a);
cout<<endl<<"The size of pointer integer variable : "<<sizeof(w);
cout<<endl<<"The size of normal boolean variable : "<<sizeof(b);
cout<<endl<<"The size of pointer boolean variable : "<<sizeof(x);
cout<<endl<<"The size of normal double variable : "<<sizeof(c);
cout<<endl<<"The size of pointer double variable : "<<sizeof(y);
cout<<endl<<"The size of normal float variable : "<<sizeof(d);
cout<<endl<<"The size of pointer float variable : "<<sizeof(z);
cout<<endl<<"The size of normal character variable : "<<sizeof(e);
cout<<endl<<"The size of pointer character variable : "<<sizeof(u);
cout<<endl<<"The size of normal long variable : "<<sizeof(f);
cout<<endl<<"The size of pointer long variable : "<<sizeof(v);

return 0;
}
