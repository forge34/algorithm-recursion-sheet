#include <iostream>
#include <vector>
using namespace std;

void binaryConvert(int n){
    if (n == 0)
        return;

    binaryConvert(n / 2);
    
    cout << n % 2;
}


int main() {
    int T;
    cin >> T;

    vector<int> inputs(T);

    for (size_t i = 0; i < inputs.size(); i++)
    {
        cin >> inputs[i];
    }

    for (size_t i = 0; i < inputs.size(); i++)
    {
        binaryConvert(inputs[i]);
        cout << endl;
    }


    return 0;
}