#include <bits/stdc++.h>
using namespace std;
int countfreq(int arr[], int n){
    unordered_map <int,int> h;
    for (int i=0; i<n; i++)
    h[arr[i]]++;
    for (auto e: h)
    cout<<e.first << " "<< e.second<<endl;
}
int main (){
    int arr[]= {10 , 20 , 10 , 30 , 40 , 10};
    int n=6;
    countfreq(arr, 6);
    return 0;
}
