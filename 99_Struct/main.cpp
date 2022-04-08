#include<iostream>
using namespace std;

struct student {
    int rollNo;
    string name;
    string address;
};

int main() {
    student s={287,"Sidhant","B-112"};
    cout<<s.name<<" "
        <<s.rollNo<<" "
        <<s.address<<"\n";
    return 0;
}