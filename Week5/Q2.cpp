#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        int n , key , flag = 0;
        cin >> n;

        int a[n];
        unordered_map<int , int> mp;

        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        cin >> key;

        for(int i = 0 ; i < n ; i++){
            if(mp[key - a[i]] != 0){
                cout<<a[i]<<" "<<key - a[i]<<" , ";
                mp[a[i]]--;
                flag = 1;
            }
        }
        if(flag == 0)
            cout<<"No Such pair Exist";
        
        cout<<endl;
    }
    
    return 0;
} 