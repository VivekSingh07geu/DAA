#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        int n , comparisons = 0 , swaps = 0;
        cin >> n;

        int a[n];

        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        for(int i = 0 ; i < n - 1 ; i++){
            int index = i;

            for(int j = i + 1 ; j < n ; j++){
                if(a[j] < a[index]){
                    index = j;
                    comparisons++;
                }
            }
            swap(a[index] , a[i]);
            swaps++;
        }

        for(int i = 0 ; i < n ; i++)
            cout<<a[i]<<" ";
        cout<<endl;

        cout<<"comparisons = "<<comparisons<<endl;
        cout<<"swaps = "<<swaps<<endl;

    }
    
    return 0;
} 