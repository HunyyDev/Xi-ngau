#include <iostream>

using namespace std;

int main() {
    int a=0,b=0,c;
    for(int i=1; i<=4; ++i) {
        cin>>c;
        a+=c;
    }
    for(int i=1; i<=4; ++i) {
        cin>>c;
        b+=c;
    }
    if (a>b) {
        cout<<"Nam";
    } else if (a<b) {
        cout<<"Nga";
    } else {
        cout<<"Tie";
    }
    return 0;
}