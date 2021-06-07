#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    int x;
    try
    {
        x=stoi(S);
        cout<<x;
    }
    catch(exception e)
    {
        cout<<"Bad String"<<endl;
    }
    // x=stoi(S);
    // cout<<x;
    return 0;
}

