#include <iostream>

using namespace std;

int main()
{
    
    cout << "hello, user" << endl;
    float length ;
    cout << "enter length in centimeter" << endl;
    cin >> length ;
    cout << endl;
    cout << "length in meter" << endl << "=" << length/100 << endl;
    cout <<  endl;
    cout << "length in kilometer" << endl << "=" << length/1000 << endl;
    cout << endl;

    return 0;
}
