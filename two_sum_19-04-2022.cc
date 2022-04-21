#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int k = atoi(argv[argc-1]);

    bool flag = false;
    for (int i = 1; i <= argc-3; i++)
    {
        for (int j = i+1; j <= argc-2; j++)
        {
            if (atoi(argv[i]) + atoi(argv[j]) == k)
            {
                cout << "true" << endl;
                flag = true;
                break;
            }
        }

        if (flag)
            break;
    }

    if (!flag)
        cout << "false" << endl;

    return 0;
}
