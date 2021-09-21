#include<bits/stdc++.h>
using namespace std;

int partion(vector<int> &arr , int l , int r) {
    int pivot = arr[r];
    int i = l - 1;
    
    for(int j = l ; j < r ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[r]);
    
    return i+1;
}

void quickSort(vector<int> &arr , int l , int r){
    if(l < r){
        int pi = partion(arr , l , r);
        quickSort(arr , l , pi - 1);
        quickSort(arr , pi + 1 , r);
    }
    return;
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0 ; i < n ; i++)
            cin >> v[i]; 

        quickSort(v , 0 , n-1);

        bool is_duplicate = false;

        for(int i = 0 ; i < n - 1 ; i++){
            if(v[i] == v[i + 1]){
                is_duplicate = true;
                break;
            }
        }

        if(is_duplicate)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}    