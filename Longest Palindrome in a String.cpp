//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // bool palindrome(string S){
    //     int i = 0; 
    //     int j = S.size()-1;
        
    //     while(i <= j){
    //         if(S[i] == S[j]){
    //             i++;
    //             j--;
    //         }else{
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    string longestPalin (string S) {
        // int s = 0;
        // int e = S.size()-1;
        // // base case
        // // if the string is already a palindrome
        // if(palindrome(S)){
        //     return S;
        // }
        // // if no char matches
        // string res = "";
        // if(S[s] != S[e]){
        //     res += S[0];
        //     return res;
        // }
        
        // string res1="";
        // while(s <= e){
        //     if(S[s] == S[e]){
        //         res += S[s];
        //         res1 += S[e];
        //         s++;
        //         e--;
        //     }else if(S[s] != S[e]){
        //         e = S.size();
        //         res1 = "";
        //         res = "";
        //         if(S[s] == S[e]){
        //             res += S[s];
        //             res1 += S[e];
        //             s++;
        //             e--;
        //         }
        //     }
        // }
        
        // string ans = "";
        // ans = res+res1;
        // return ans;
        
        int n = S.size();
        int start = 0, end = 0, maxl = 1;
        for(int i = 0; i < n; i++){
            int l = i, r = i;
            while(l >= 0 && r < n){
                if(S[l] != S[r]){
                    break;
                }
                l--;
                r++;
            }
            int len = r-l-1;
            if(len > maxl){
                maxl = len;
                start = l+1;
                end = r-l;
            }
        }
        
        // even length
        for(int i = 0; i < n; i++){
            int l = i, r= i+1;
            while(l >= 0 && r < n){
                if(S[l] != S[r]){
                    break;
                }
                l--;
                r++;
            }
            int len = r-l-1;
            if(len > maxl){
                maxl = len;
                start = l+1;
                end = r-l;
            }
        }
        return S.substr(start,maxl); 
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
