#include<iostream>
#include<algorithm>
using namespace std;

void solve() {
    string str;
    cin>>str;
    int left=0, right=str.length()-1;
    while(left<right) {
        if(str[left]!=str[right]) {
            cout<<"false"<<endl;
            break;
        }
        left++;
        right--;
    }
    if(left>=right)
        cout<<"true"<<endl;
}

int main() {
    solve();
    return 0;
}