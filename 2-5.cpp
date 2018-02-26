//
// Created by Jordan Lujan on 2/24/18.
//
#include <iostream>
using namespace std;

int main()
{

    bool arr[24637] = {false};
    for (int m = 0; m <24637; m++)
        arr[m] = (m%2==0);

    for (int m = 0; m< 24637; m++)
        cout <<arr[m]?1:0;

    return 0;
}

