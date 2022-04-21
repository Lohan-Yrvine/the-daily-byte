#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        string normal_string = argv[i];
        string reversed_string = normal_string;
        reverse(reversed_string.begin(), reversed_string.end());

        if (reversed_string == normal_string)
            cout << "true" << endl;
        else
        {
            bool flag = false;

            for (int j = 0; j < normal_string.length(); j++)
            {
                string aux1 = normal_string;
                string aux2 = reversed_string;
                aux1.erase(j, 1);
                aux2.erase(reversed_string.length()-j-1, 1);
                if (aux1 == aux2)
                {
                    cout << "true" << endl;
                    flag = true;
                    break;
                }
            }

            if (!flag)
                cout << "false" << endl;
        }
    }

    return 0;
}
