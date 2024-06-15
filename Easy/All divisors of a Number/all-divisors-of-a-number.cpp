//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        vector<int> list;
        for(int i=1;i<=sqrt(n);i++){
            if( n%i ==  0){
               list.push_back(i);
               if((n/i)!=i){
                   list.push_back(n/i);
               }
            }
        }
            sort(list.begin(), list.end());
            for(auto it : list){
            cout<< it << " ";
    }
    }

};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends