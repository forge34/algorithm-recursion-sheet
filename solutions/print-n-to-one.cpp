#include <iostream>

using namespace std;

void printNtoOne(int n){
    if (n <= 0){
        return;
    }

    cout << n;
    if (n-1 > 0) cout << " ";

    printNtoOne(n-1);
}

int main(){

    int n;

    cin >> n;

    printNtoOne(n);

    return 0;
}