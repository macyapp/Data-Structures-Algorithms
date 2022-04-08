#include<iostream>
using namespace std;

struct point {
    int x;
    int y;
};

int main() {
    point p;
    p.x=10;
    p.y=20;
    cout<<"("<<p.x<<","<<p.y<<")\n";
    return 0;
}