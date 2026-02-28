#include <iostream>

using namespace std;

void printDigits(int n) {
    if (n < 10) { 
        cout << n;
        return;
    }
    printDigits(n / 10);   
    cout << " " << n % 10; 
}

int main()
{

    int noTestCases;

    cin >> noTestCases;

    int cases[noTestCases];

    for (int i = 0; i < noTestCases; i++)
    {
        int n;

        cin >> n;

        cases[i] = n;
    }

    for (int i = 0; i < noTestCases; i++)
    {
       printDigits(cases[i]);
       cout << endl;
    }

    return 0;
}