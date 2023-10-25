#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,tmp,x,y;
    cin >> n ;
    if (n == 0) return 0;
    vector <int> v;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        v.push_back(tmp);
    }
    //handle
    cin >>x >>y;
    vector <int> vNew;
    for (auto i : v) {
        if (i < x || i> y)
            vNew.push_back(i);
    }
    //out
    int i;
    for(i = 0; i< vNew.size()-1 ; ++i)
        cout << vNew[i]<<" ";
    cout << vNew[i]<<endl;


    return 0;
}