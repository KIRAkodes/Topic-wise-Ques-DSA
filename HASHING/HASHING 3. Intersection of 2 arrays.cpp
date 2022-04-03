#include <bits/stdc++.h>
using namespace std;
int intersect (int a[], int b[], int m, int n) 
{
    unordered_set <int> s( a, a+m );
    int res=0;
    for (int i=0; i<n; i++)
     if ( s.find(b[i]) != s.end() )
     {
         res++;
         s.erase( b[i] );
     }
     return res;

}
int main() {
    int a[]= {10,20,10,10,30};
    int b[]= {10, 20, 30, 40};
    int m=5;
    int n=4;
    cout<< intersect(a,b,5,4) << endl;
}
