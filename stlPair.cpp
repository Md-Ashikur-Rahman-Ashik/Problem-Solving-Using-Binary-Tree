#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<string, int> integerPair;
    // // integerPair = make_pair(1, 2);
    // integerPair = {"Hello", 3};
    // cout << integerPair.first << endl;
    // cout << integerPair.second << endl;

    int vectorSize;
    cin >> vectorSize;
    vector<pair<int, int>> pairVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> pairVector[i].first >> pairVector[i].second;
    }

    for (int i = 0; i < vectorSize; i++)
    {
        cout << pairVector[i].first << " " << pairVector[i].second << endl;
    }

    return 0;
}