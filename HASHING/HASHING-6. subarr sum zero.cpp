#include <bits/stdc++.h>
using namespace std;


int subarrzerosum(int a[], int n){
    unordered_set <int> h;
    int presum =0;
    for (int i=0 ; i< n; i++)
    {
        presum += a[i];
        if (h.find(presum) != h.end())
        return true;
        
        if (presum==0)
        return true;
        
        h.insert(presum);
    }
    return false;
}
int main (){
    int a[]= {10, -30};
    int n=sizeof(a)/sizeof(int);
    cout<< subarrzerosum(a, n)<<endl;
}
