#include<iostream>
using namespace std;

int main(){
int arr[10];
cout<<"Enter the elements of the array : ";
for (int i=0 ; i<10 ; i++){
    cin>>arr[i];
}
int *ptr;

cout<<"Elements of the array are : ";
for (int i=0 ; i<10 ; i++){
    cout<<arr[i]<<endl;
}
cout<<endl<<"Pointer method : "<<endl;

ptr = arr;
for (int j = 0; j < 10; j++)
    cout<<*(ptr+j)<<endl;
}

