#include <bits/stdc++.h>

using namespace std;

int main()
{
   int s[] = {0,1,0,0,1};
    int size = 5;
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+s[i];
    }
    cout<<sum<<endl;
    return 0;
}
