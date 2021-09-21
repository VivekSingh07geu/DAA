#include<bits/stdc++.h>
using namespace std;

int comparisons = 0;
int swaps = 0;

int partion(vector<int> &arr , int l , int r) {
    int pivot = arr[r];
    int i = l - 1;
    for(int j = l ; j < r ; j++){
        comparisons++;
        if(arr[j] < pivot){
            i++;
            swaps++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[r]);
    swaps++;
    
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

        for(int i = 0 ; i < n ; i++)
            cout<<v[i]<<" ";
        cout<<endl;

        cout<<"comparisons = "<<comparisons<<endl;
        cout<<"swaps = "<<swaps<<endl;
    }
    return 0;
}        