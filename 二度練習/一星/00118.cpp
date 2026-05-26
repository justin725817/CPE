#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols;
    if (!(cin >> rows >> cols))
        return 0;

    vector<vector<string>> land(rows + 1, vector<string>(cols + 1, ""));

    int oriRows, oriCols;
    char postion;

    while (cin >> oriRows >> oriCols >> postion)
    {
        string orderRobot;
        cin >> orderRobot;

        bool isLost = false;

        for (int i = 0; i < orderRobot.length(); i++)
        {

            if (orderRobot[i] == 'R')
            {
                if (postion == 'N')
                    postion = 'E';
                else if (postion == 'E')
                    postion = 'S';
                else if (postion == 'S')
                    postion = 'W';
                else if (postion == 'W')
                    postion = 'N';
            }
            else if (orderRobot[i] == 'L')
            {
                if (postion == 'N')
                    postion = 'W';
                else if (postion == 'W')
                    postion = 'S';
                else if (postion == 'S')
                    postion = 'E';
                else if (postion == 'E')
                    postion = 'N';
            }

            else if (orderRobot[i] == 'F')
            {
                int nextRows = oriRows;
                int nextCols = oriCols;

                if (postion == 'N')
                    nextCols++;
                else if (postion == 'S')
                    nextCols--;
                else if (postion == 'E')
                    nextRows++;
                else if (postion == 'W')
                    nextRows--;

                if (nextRows < 0 || nextRows > rows || nextCols < 0 || nextCols > cols)
                {
                    if (land[oriRows][oriCols] == "LOST")
                    {
                        continue;
                    }
                    else
                    {
                        land[oriRows][oriCols] = "LOST";
                        isLost = true;
                        break;
                    }
                }
                else
                {
                    oriRows = nextRows;
                    oriCols = nextCols;
                }
            }
        }

        cout << oriRows << " " << oriCols << " " << postion;
        if (isLost)
        {
            cout << " LOST";
        }
        cout << "\n";
    }
    return 0;
}