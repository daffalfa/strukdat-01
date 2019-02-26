/*
Muhammad Daffa Alfarizqi
140810180039
celcius to fahrenheit
*/
#include <iostream>

using namespace std;

float konversiFahrenheit(int temp){
    return temp*9/5+32;
}

int main()
{
    int celcius;
    cout << "celcius ke fahrenheit"<<endl;
    cout << "Celcius    = ";
    cin >> celcius;
    cout << "Fahrenheit = " << konversiFahrenheit(celcius);
    return 0;
}
