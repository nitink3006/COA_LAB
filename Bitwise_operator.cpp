#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	cout<<"a = " << a <<","<< " b = " << b <<endl;
	cout << "Bitwise Operators\n";
    cout << "a & b = " << (a&b) << "\n";
    cout << "a | b = " << (a|b) << "\n";
    cout << "a ^ b = " << (a^b) << "\n";
    cout << "~a = " << (~a) << "\n";
    cout << "~b = " << (~b) << "\n";
    cout << "a >> b = " << (a>>b) << "\n";
    cout << "a << b = " << (a<<b) << "\n";
	return 0;
}


