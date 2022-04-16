#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        char* normal_string = argv[i];
        string reversed_string = "";
        for (int j = strlen(normal_string) - 1; j >= 0; j--)
            reversed_string += normal_string[j];


        cout << reversed_string << endl;
    }

    return 0;
}
