#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        unordered_map<char, int> directions = {
            {'L', 0},
            {'R', 0},
            {'U', 0},
            {'D', 0}
        };

        for (int j = 0; j < strlen(argv[i]); j++)
        {
            if (argv[i][j] == 'L')
                directions['L'] += 1;
            else if (argv[i][j] == 'R')
                directions['R'] += 1;
            else if (argv[i][j] == 'U')
                directions['U'] += 1;
            else
                directions['D'] += 1;
        }

        if (directions['L'] == directions['R'] && directions['U'] == directions['D'])
            cout << true << endl;
        else
            cout << false << endl;
    }

    return 0;
}
