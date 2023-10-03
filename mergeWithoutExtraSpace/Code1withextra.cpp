class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            vector<int> v;
            
            for(int i=0;i<n;i++)
            {
                v.push_back(arr1[i]);
            }
            for(int i=0;i<m;i++)
            {
                v.push_back(arr2[i]);
            }
            sort(v.begin() , v.end());
            for(int i=0;i<n;i++)
            {
                arr1[i] = v[i];
               
            }
            for(int i=0;i<m;i++)
            {
                arr2[i] = v[i+n];
            }
        } 
};