#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,tmp;
    cin >> n;
    if (n == 0) return 0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        v[i] = tmp; //need init   or    v.push_back(tmp);
    }
    int i ;

    for ( i = 0; i < v.size()-1; ++i)
        cout << v[i] <<" ";

    cout << v[i] << endl;
    return 0;
}