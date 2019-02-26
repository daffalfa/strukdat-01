/*
Muhammad Daffa Alfarizqi
140810180039
fizz buzz
*/
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"input angka: ";cin>>a;
    for(int i=0; i<=a;i++)
    {
        if(i%15==0)
        {
            cout<<"fizz buzz\n";
        }
        else if(i%5==0)
        {
            cout<<"fizz\n";
        }
        else if(i%3==0)
        {
            cout<<"buzz\n";
        }
        else
            cout<<i<<endl;
    }
}
