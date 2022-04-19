#include <iostream>
#include <algorithm>

using namespace std;

bool word_is_lower(string& word)
{
    return all_of(word.begin(), word.end(), [](char c){ return islower(c); });
}

bool word_is_upper(string& word)
{
    return all_of(word.begin(), word.end(), [](char c){ return isupper(c); });
}

bool word_is_capitalized(string& word)
{
    bool first_character_is_upper = isupper(word[0]);
    string tmp = word;
    tmp.erase(0, 1);
    bool rest_of_string_is_lower = word_is_lower(tmp);

    return first_character_is_upper && rest_of_string_is_lower;
}

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        string word = argv[i];
        if (word_is_lower(word))
            cout << true << endl;
        else if (word_is_upper(word))
            cout << true << endl;
        else if (word_is_capitalized(word))
            cout << true << endl;
        else
            cout << false << endl;
    }

    return 0;
}
