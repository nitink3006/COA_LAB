#include <bits/stdc++.h>
using namespace std;

void Half_Subtractor(int A,int B){
	int Difference,Borrow;
	Difference = A ^ B;
	A = not(A);
	Borrow = A & B;
	
	cout<<"Difference = "<<Difference<<endl;
	cout<<"Borrow = "<<Borrow<<endl;
}
int main() {
	int A,B;
	cin>>A>>B;
	Half_Subtractor(A,B);
	return 0;
}



OUTPUT
1
0
Difference=1
Borrow=0
