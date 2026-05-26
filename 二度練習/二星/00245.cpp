#include <bits/stdc++.h>
using namespace std;

vector<string> wordList;

void handleNumber(int index)
{
    string target = wordList[wordList.size() - index];
    cout << target;
    wordList.erase(wordList.end() - index);
    wordList.push_back(target);
}

void handleWord(string word)
{
    cout << word;
    wordList.push_back(word);
}
int main()
{
    char C;
    string currentWord = "";
    int currentNum = 0;

    bool inWord = false;
    bool inNum = false;

    while (cin.get(C))
    {
        if (isalpha(C))
        {
            if (inNum)
            {
                if (currentNum == 0)
                {
                    break;
                }
                handleNumber(currentNum);
                currentNum = 0;
                inNum = false;
            }
            currentWord += C;
            inWord = true;
        }
        else if (isdigit(C))
        {
            if (inWord)
            {
                handleWord(currentWord);
                currentWord = "";
                inWord = false;
            }
            currentNum = currentNum * 10 + (C - '0');
            inNum = true;
        }
        else
        {
            if (inWord)
            {
                handleWord(currentWord);
                currentWord = "";
                inWord = false;
            }
            if (inNum)
            {
                if (currentNum == 0)
                {
                    break;
                }
                handleNumber(currentNum);
                currentNum = 0;
                inNum = false;
            }
            cout << C;
        }
    }
    return 0;
}