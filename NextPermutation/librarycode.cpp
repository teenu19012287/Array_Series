// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        next_permutation(arr.begin() , arr.end());
        return arr;
    }
};


// brute force can be

// 1--  generate all the possible permuations
// 2-- do linear search
// 3--  Find the next Index
