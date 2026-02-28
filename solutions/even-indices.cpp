#include <iostream>
#include <vector>

using namespace std;

void printEvenIndices(const vector<int> &vec, int index = 0)
{
    if (index < 0)
        return;

    if (index % 2 == 0)
    {
        cout << vec[index];
        if (index - 2 >= 0)
            cout << " ";
    }
    printEvenIndices(vec, index - 1);
}

int main()
{
    int T;
    cin >> T;

    vector<int> inputs(T);
    for (size_t i = 0; i < inputs.size(); i++)
    {
        cin >> inputs[i];
    }

    printEvenIndices(inputs, inputs.size() - 1);
    return 0;
}