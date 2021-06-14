#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        if(n==1)
            cout<<"Not prime"<<endl;
        else 
        {
        long sq_root=sqrt(n);
        // cout<<sq_root<<endl;
        int flag=0;
        for(int i=2;i<=sq_root;i++)
        {
            if(n%i==0)
            {   
                flag=1;
                cout<<"Not prime"<<endl;
                break;
            }
        }
        if(flag==0)
            cout<<"Prime"<<endl;
        }
    }
    return 0;
}

