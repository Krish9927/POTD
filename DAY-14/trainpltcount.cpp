//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        int m = arr.size(); // total arrivals
        int n = dep.size(); // total departures
        
        // Sort arrival and departure times
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int i = 1, j = 0;
        int pltcount = 1; 
        int result = 1; 
        while (i < m && j < n) {
            if (arr[i] <= dep[j]) {
                pltcount++; 
                i++; 
            }
            else {
                pltcount--;
                j++;
            }
            result = max(result, pltcount);
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends