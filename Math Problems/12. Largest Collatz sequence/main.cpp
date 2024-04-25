#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<long long int> vec;
    long long int maxLength = 0;
    long long int maxNum = 0;
    long long int x;

    for (long long int i = 2; i <= 1000000; ++i)
    {
        x = i;
        vec.clear();
        vec.push_back(x);

        while ( x > 1)
        {
            if(x % 2 == 0)
            {
                x = x / 2;
            }
            else
            {
                x = 3 * x + 1;
            }

            vec.push_back(x);
        }

        if (vec.size() >= maxLength)
        {
            maxNum = vec.front();
            maxLength = vec.size() - 1;
        }
    }

    cout << "LENGTH IS " << maxLength << ", NUM IS " << maxNum << endl;

    return 0;
}
