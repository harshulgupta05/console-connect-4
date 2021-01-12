#include <iostream>

using namespace std;

int main() 
{
    char gameboard[6][7] = {{'.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.'}, };
    bool won = false, filled = false;
    int y, moves;
     
    cout << "Welcome to Connect 4! You will be prompted (one at a time) to enter the column number (1-7 inclusive) which you would like to place your token in. The winner will be announced when four tokens connect in a vertical, horizontal, or diagonal line. There are two players. The token will be denoted by 'R' or 'Y' for Player 1 and Player 2, respecitvely." << endl;

    for (int i = 0; i <= 5; ++i)
    {
        for (int j = 0; j <= 6; ++j)
        {
            cout << gameboard[i][j] << " ";
        }
        cout << endl;
    }

    while (won != true)
    {
        cout << "Player 1, please enter the column where you would like to place your token: ";
        cin >> y;
        y = y - 1;

        while (filled != true)
        {
            if (gameboard[5][y] == '.')
            {
                gameboard[5][y] = 'R';
                filled = true;
            }
            else if (gameboard[4][y] == '.')
            {
                gameboard[4][y] = 'R';
                filled = true;
            }
            else if (gameboard[3][y] == '.')
            {
                gameboard[3][y] = 'R';
                filled = true;
            }
            else if (gameboard[2][y] == '.')
            {
                gameboard[2][y] = 'R';
                filled = true;
            }
            else if (gameboard[1][y] == '.')
            {
                gameboard[1][y] = 'R';
                filled = true;
            }
            else if (gameboard[0][y] == '.')
            {
                gameboard[0][y] = 'R';
                filled = true;
            }
            else 
            {
                cout << "That column is already full. Lose a turn." << endl;
                filled = true;
            }
        }

        for (int i = 0; i <= 5; ++i)
        {
            for (int j = 0; j <= 6; ++j)
            {
                cout << gameboard[i][j] << " ";
            }
            cout << endl;
        }

        filled = false;

        for (int a = 0; a <= 5; ++a)
        {
            for (int b = 0; b<= 6; ++b)
            {
                if (gameboard[a][b] ==  gameboard[a][b + 1] && gameboard[a][b] == gameboard[a][b + 2] && gameboard[a][b] == gameboard[a][b + 3] && gameboard[a][b] != '.')
                {
                    cout << "Player 1 has won!" << endl;
                    won = true;
                    return 0;
                }

                if (gameboard[a][b] ==  gameboard[a + 1][b] && gameboard[a][b] == gameboard[a + 2][b] && gameboard[a][b] == gameboard[a + 3][b] && gameboard[a][b] != '.')
                {
                    cout << "Player 1 has won!" << endl;
                    won = true;
                    return 0;
                }

                if (gameboard[a][b] ==  gameboard[a + 1][b + 1] && gameboard[a][b] == gameboard[a + 2][b + 2] && gameboard[a][b] == gameboard[a + 3][b + 3] && gameboard[a][b] != '.')
                {
                    cout << "Player 1 has won!" << endl;
                    won = true;
                    return 0;
                }

                if (gameboard[a][b] ==  gameboard[a - 1][b + 1] && gameboard[a][b] == gameboard[a - 2][b + 2] && gameboard[a][b] == gameboard[a - 3][b + 3] && gameboard[a][b] != '.')
                {
                    cout << "Player 1 has won!" << endl;
                    won = true;
                    return 0;
                }
            }
        }

        cout << "Player 2, please enter the column where you would like to place your token: ";
        cin >> y;
        y = y - 1;

        while (filled != true)
        {
            if (gameboard[5][y] == '.')
            {
                gameboard[5][y] = 'Y';
                filled = true;
            }
            else if (gameboard[4][y] == '.')
            {
                gameboard[4][y] = 'Y';
                filled = true;
            }
            else if (gameboard[3][y] == '.')
            {
                gameboard[3][y] = 'Y';
                filled = true;
            }
            else if (gameboard[2][y] == '.')
            {
                gameboard[2][y] = 'Y';
                filled = true;
            }
            else if (gameboard[1][y] == '.')
            {
                gameboard[1][y] = 'Y';
                filled = true;
            }
            else if (gameboard[0][y] == '.')
            {
                gameboard[0][y] = 'Y';
                filled = true;
            }
            else 
            {
                cout << "That column is already full. Lose a turn." << endl;
                filled = true;
            }
        }

        for (int i = 0; i <= 5; ++i)
        {
            for (int j = 0; j <= 6; ++j)
            {
                cout << gameboard[i][j] << " ";
            }
            cout << endl;
        }

        filled = false;

        for (int a = 0; a <= 5; ++a)
        {
            for (int b = 0; b<= 6; ++b)
            {
                if (gameboard[a][b] ==  gameboard[a][b + 1] && gameboard[a][b] == gameboard[a][b + 2] && gameboard[a][b] == gameboard[a][b + 3] && gameboard[a][b] != '.')
                {
                    cout << "Player 2 has won!" << endl;
                    won = true;
                    return 0;
                }

                if (gameboard[a][b] ==  gameboard[a + 1][b] && gameboard[a][b] == gameboard[a + 2][b] && gameboard[a][b] == gameboard[a + 3][b] && gameboard[a][b] != '.')
                {
                    cout << "Player 2 has won!" << endl;
                    won = true;
                    return 0;
                }

                if (gameboard[a][b] ==  gameboard[a + 1][b + 1] && gameboard[a][b] == gameboard[a + 2][b + 2] && gameboard[a][b] == gameboard[a + 3][b + 3] && gameboard[a][b] != '.')
                {
                    cout << "Player 2 has won!" << endl;
                    won = true;
                    return 0;
                }

                if (gameboard[a][b] ==  gameboard[a - 1][b + 1] && gameboard[a][b] == gameboard[a - 2][b + 2] && gameboard[a][b] == gameboard[a - 3][b + 3] && gameboard[a][b] != '.')
                {
                    cout << "Player 2 has won!" << endl;
                    won = true;
                    return 0;
                }
            }
        }
    }
}