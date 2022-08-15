#include<bits/stdc++.h>
#include<fstream>
ifstream in("input.txt");
ofstream out("output.txt");
using namespace std;
int main()
{
    int n,p=0,i;
    cin>>n;
    
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        p=1;
    }
    if(p==1 || n==1 || n==0)
        cout<<n<<"is not prime"<<endl;

    else
        cout<<n<<"is a prime"<<endl;

    return 0;
}