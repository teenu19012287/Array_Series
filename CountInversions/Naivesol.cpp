class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code 
        long long count=0;
        int maxi = INT_MIN;
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
          
           
               if(arr[j] < arr[i])
                  count++;
           
           
        }
        
    }
    return count;
    }

};