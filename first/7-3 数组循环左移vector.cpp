#include "iostream"
#include "vector"
#include "algorithm"

using namespace  std;

int main(){
    int n,m;
    cin >> n >> m;
    m =m%n;

    vector<int> v(n);
    for (int i = 0; i<n; ++i)
        cin >> v[i];

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.end()-m);
    reverse(v.begin()+n-m,v.end());

    int i =0;
    for (i = 0 ; i<v.size()-1;++i)
        cout << v[i]<<" ";
    cout << v[i];



    return 0;
}