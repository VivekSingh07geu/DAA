#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n , key , count = 0;
        cin >> n;

        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        cin >> key;

        for(int i = 0 ; i < n - 1 ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(abs(a[i] - a[j]) == key)
                    count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
} 