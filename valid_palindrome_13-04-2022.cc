#include <iostream>
#include <algorithm>

using namespace std;

bool is_non_alphabetical(char ch)
{
    if (!(ch >= 'a' && ch <= 'z'))
        return true;

    return false;
}

void trait_string(string& word)
{
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    word.erase(remove_if(word.begin(), word.end(), &is_non_alphabetical), word.end());
}

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        string normal_string = argv[i];
        trait_string(normal_string);
        string reversed_string = normal_string;
        reverse(reversed_string.begin(), reversed_string.end());

        if (reversed_string == normal_string)
            cout << true << endl;
        else
            cout << false << endl;
    }

    return 0;
}
