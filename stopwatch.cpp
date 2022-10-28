// Solving Kattis Stopwatch
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int len, total, a, b;

using namespace std;
int main() {
    cin>>len;
    if (len&1) {
        cout<<"still running";
        return 0;
    }
    while (len>0) {
        cin>>a>>b;
        total+=b-a;
        len-=2;
    }
    cout<<total;
    return 0;
}
