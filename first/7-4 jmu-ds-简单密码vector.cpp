#include "iostream"


using namespace  std;

int main(){
    string result;
    getline(cin,result);
    if (result.empty()){
        cout<<"NULL";
        return 0;
    }
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] >= 'A' && result[i] <='E')
            result[i] += 21;
        else if (result[i] >= 'F' && result[i] <='Z')
            result[i] -= 5;
    }
    cout<<result;

    return 0;
}