#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        int n , key , j , comparisons = 0 , shifts = 0;
        cin >> n;

        int a[n];

        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        for(int i = 1 ; i < n ; i++){
            key = a[i];

            for(j = i - 1 ; j >= 0 ; j--){
                if(a[j] > key){
                    comparisons++;
                    a[j + 1] = a[j];
                }
                else
                    break;
            }
            a[j+1] = key;
            shifts++;
        }
        shifts += comparisons;

        for(int i = 0 ; i < n ; i++)
            cout<<a[i]<<" ";
        cout<<endl;

        cout<<"Comparisons = "<<comparisons<<endl;
        cout<<"Shifts = "<<shifts<<endl;

    }
    
    return 0;
} 