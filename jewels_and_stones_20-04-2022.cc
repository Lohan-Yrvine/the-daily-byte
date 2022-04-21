#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string jewels = argv[1], stones = argv[2];
    int jewels_counter = 0;
    for (auto& c : stones)
    {
        if (jewels.find(c) != string::npos)
            jewels_counter += 1;
    }

    cout << jewels_counter << endl;

    return 0;
}
