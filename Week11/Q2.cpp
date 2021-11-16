#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define vl vector<ll>

int main()
{
    int t = 1;
    //cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl v(n);
        for(int i = 0 ; i < n ; i++)
            cin >> v[i];

        int sum;
        cin >> sum;

        vector<vector<int>> dp(n + 1 , vector<int> (sum + 1 , 0));

        for(int i = 0 ; i <= n ; i++){
            dp[i][0] = 1;
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= sum ; j++){
                if(v[i-1] <= j)
                    dp[i][j] = dp[i][j - v[i-1]] + dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }

        cout<<dp[n][sum]<<endl;

    }       
    
    return 0;
} 