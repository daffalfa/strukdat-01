/*
Muhammad Daffa Alfarizqi
140810180039
Swap!
*/
#include<iostream>
using namespace std;

void tukar(int&a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout <<"input a:";cin>>a;
    cout<<"input b:";cin>>b;
    tukar(a,b);
    cout<< "a : "<< a<<endl;
    cout<< "b : "<<b<<endl;
}
