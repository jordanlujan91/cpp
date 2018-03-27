#include <iostream>

using namespace std;

int main()
{
    int x = 38492;
    bool negative = false;
    if(x < 0)
    {
        negative = true;
        x = -x;
    }

    int reversed = 0;
    while(x > 0)
    {
        reversed = reversed*10 + x%10;
        x /= 10;
    }

    if(negative) reversed = -reversed;
    cout << reversed << '\n';
}

