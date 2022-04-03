#include <bits/stdc++.h>
using namespace std;
int unionOfarr(int a[], int b[], int m, int n)
{
    unordered_set <int> h (a, a+m);
    for (int i=0; i<n; i++)
    h.insert(b[i]);
    return h.size();
}
int main() {
    int a[] = { 10,20,10,30,50 };
    int b[] = { 10,40,50,60,70 };
    int m = sizeof (b) / sizeof(int);
    int n = sizeof (a) / sizeof(int);
    cout<<unionOfarr(a,b,m,n);
}
