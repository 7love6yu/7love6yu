#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int n; cin>>n;
    vector <int> v;
    for (int i = 0; i < n; ++i) {
        int val;
        cin>>val;
        v.push_back(val);
    }
    int val2;
    cin >> val2;
    v.push_back(val2);
    sort(v.begin(),v.end());

    for (auto i : v)
        cout <<i<<",";

    return 0;
}
