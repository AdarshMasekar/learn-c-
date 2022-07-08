#include <iostream>
using namespace std;
int main(){
    cout << "length of char is:"<<sizeof(char)<<endl;                       //1
    cout << "length of int is:"<<sizeof(int)<<endl;                         //4
    cout << "length of double is:"<<sizeof(double)<<endl;                   //8
    cout << "length of wchar is:"<<sizeof(wchar_t)<<endl;                   //4
    return 0;
}
