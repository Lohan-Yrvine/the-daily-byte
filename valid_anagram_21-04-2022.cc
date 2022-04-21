#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    unordered_map<char, int> s_characters_counter, t_characters_counter;
    string s = argv[1], t = argv[2];

    if (s.length() != t.length())
        cout << "false" << endl;
    else
    {
        for (auto& c : s)
        {
            s_characters_counter[c] = count(s.begin(), s.end(), c);
            t_characters_counter[c] = count(t.begin(), t.end(), c);
        }

        if (s_characters_counter == t_characters_counter)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }


    return 0;
}
