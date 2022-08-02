//https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long ans  =0;
        long temp = 0;
        for(int i=0;i<N;i++){
            if(i<K){
                ans+=Arr[i];
                temp = ans;
                
            }
            else{
            temp -= Arr[i-K];
            temp += Arr[i];
            ans = max(ans,temp);
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
