//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


  
   class Solution {
  public:
  
    void permute(vector<int>& arr,int start,int end,set<vector<int>>& ans){
        if(start==end){
            ans.insert(arr);
            return;
        }
        else{
            for(int i=start;i<=end;i++){
                swap(arr[start],arr[i]);
                permute(arr,start+1,end,ans);
                swap(arr[start],arr[i]);
            }
        }
    }
  
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        set<vector<int>> ans;
        permute(arr,0,n-1,ans);
        vector<vector<int>> answer(ans.begin(),ans.end());
        return answer;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends