/*
Description:

An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

isIsogram "Dermatoglyphics" == true
isIsogram "aba" == false
isIsogram "moOse" == false -- ignore letter case
*/

#include <cctype>
#include <unordered_set>
#include <iostream>
#include <iomanip>

bool is_Isogram(std::string text)
{
    std::unordered_set<char> char_set;
    for( const auto &c : text )
    {
        auto c_lower = std::tolower(c);
        if(char_set.count(c_lower) == 0)
        {
            char_set.insert(c_lower);
        }
        else
        {
             return false;
        }
    }

    return true;
}

int main()
{
    std::cout << std::boolalpha << is_Isogram("Alphabet") << std::endl;
}

// DUPLICATE