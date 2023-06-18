//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        int top = 1, down = N, i = 0;
        while(top < down){
            if(i%2 == 0){
                if(top+k > down){
                    return down;
                }
                else
                    top += k;
            }else {
                if(down-k < top){
                    return top;
                }else{
                    down -= k;
                }  
            }
            i++;
        }
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
