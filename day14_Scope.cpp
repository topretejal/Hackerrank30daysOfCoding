#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    int n;
	// Add your code here
    Difference(vector<int> a)
    {
        copy(a.begin(),a.end(),back_inserter(elements));
        n=elements.size();
        // for(int i=0;i<n;i++)
        //     cout<<elements[i]<<" ";
        // cout<<endl;
    }
    void computeDifference(){
        sort(elements.begin(),elements.end());
        // for(int i=0;i<n;i++)
        //     cout<<elements[i]<<" ";
        // cout<<endl;
        maximumDifference=elements[n-1]-elements[0];
    };
    
    
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
