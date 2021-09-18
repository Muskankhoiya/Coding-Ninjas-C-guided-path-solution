/*Problem Statement
Take two numbers as input and swap them and print the swapped values.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,b,j=0;
    cin>>i;
    for(j=1;j<=i;j++){
       // int p=1;
        cin>>a>>b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<a<<" "<<b<<endl;
    }
        return 0;
}
