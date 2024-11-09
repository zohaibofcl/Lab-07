#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter the size of array";
cin>>a;
int A[a];
for(b=0;b<a;b++)
{
    cout<<"enter value to store in array:";
    cin>>A[b];
}
cout<<"you  entered:"<<endl;
for(int y=0;y<=a;y++)
{
    cout<<A[y]<<endl;
}
return 0;
}
