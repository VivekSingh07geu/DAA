#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    //cin >> t;

    while(t--){
        int n , m;
        cin >> n;

        unordered_map<int , int> mp1 , mp2;

        int a[n];

        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            mp1[a[i]]++;
        }

        cin >> m;
        int b[m];

        for(int i = 0 ; i < m ; i++){
            cin >> b[i];
            mp2[b[i]]++;
        }

        for(int i = 0 ; i < n ; i++){
            if(mp1[a[i]] != 0 and mp2[a[i]] != 0){
                for(int j = 0 ; j < min(mp1[a[i]] , mp2[a[i]]) ; j++)
                        cout<<a[i]<<" ";
                
                mp1[a[i]] = 0;
                mp2[a[i]] = 0;
            }
        }
        
        cout<<endl;
    }
    
    return 0;
} 