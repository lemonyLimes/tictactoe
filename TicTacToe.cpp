#include <iostream>
using namespace std;

void printBoard(char board[])
{
    for (int i = 0; i < 9; i++)
    {
        cout << " " << board[i] << " |";
        if (i == 2 || i == 5)
        {
            cout << "\n----------\n";
        }
    }
}

int checkX(int cross, char board[9])
{
    if ((board[0] == 'X') && (board[1] == 'X') && (board[2] == 'X'))
    {
        return 1;
    }
    else if ((board[3] == 'X') && (board[4] == 'X') && (board[5] == 'X'))
    {
        return 1;
    }
    else if ((board[6] == 'X') && (board[7] == 'X') && (board[8] == 'X'))
    {
        return 1;
    }
    else if ((board[0] == 'X') && (board[3] == 'X') && (board[6] == 'X'))
    {
        return 1;
    }
    else if ((board[1] == 'X') && (board[4] == 'X') && (board[7] == 'X'))
    {
        return 1;
    }
    else if ((board[2] == 'X') && (board[5] == 'X') && (board[8] == 'X'))
    {
        return 1;
    }
    else if ((board[2] == 'X') && (board[4] == 'X') && (board[6] == 'X'))
    {
        return 1;
    }
    else if ((board[0] == 'X') && (board[4] == 'X') && (board[8] == 'X'))
    {
        return 1;
    }

    if ((board[0] == 'O') && (board[1] == 'O') && (board[2] == 'O'))
    {
        return 2;
    }
    else if ((board[3] == 'O') && (board[4] == 'O') && (board[5] == 'O'))
    {
        return 2;
    }
    else if ((board[6] == 'O') && (board[7] == 'O') && (board[8] == 'O'))
    {
        return 2;
    }
    else if ((board[0] == 'O') && (board[3] == 'O') && (board[6] == 'O'))
    {
        return 2;
    }
    else if ((board[1] == 'O') && (board[4] == 'O') && (board[7] == 'O'))
    {
        return 2;
    }
    else if ((board[2] == 'O') && (board[5] == 'O') && (board[8] == 'O'))
    {
        return 2;
    }
    else if ((board[2] == 'O') && (board[4] == 'O') && (board[6] == 'O'))
    {
        return 2;
    }
    else if ((board[0] == 'O') && (board[4] == 'O') && (board[8] == 'O'))
    {
        return 2;
    }
    return 0;
}

int main()
{
    char board[9] = {
        ' ', ' ', ' ',
        ' ', ' ', ' ',
        ' ', ' ', ' '};
    int gameFinished = 0;
    int O;
    int X;
    int turn = 0;
    cout << "Select the number corresponding to your box. X goes first.\n";
    cout << "\n1 | 2 | 3\n";
    cout << "----------\n";
    cout << "4 | 5 | 6\n";
    cout << "----------\n";
    cout << "7 | 8 | 9\n";
    while (gameFinished == 0)
    {
        while (true)
        {
            cout << "\nEnter X\n";
            std::cin >> X;
            if (board[X - 1] == ' ')
            {
                board[X - 1] = 'X';
                turn++;
                break;
            }
            cout << "Invalid input" << endl;
        }
        gameFinished = checkX(X, board);
        printBoard(board);
        if (gameFinished == 1)
        {
            cout << "\nPlayer X wins!\n";
            break;
        }
        if (gameFinished == 2)
        {
            cout << "\nPlayer O wins!\n";
            break;
        }
        if (turn == 9)
        {
            break;
        }
        while (true)
        {
            cout << "\nEnter O\n";
            std::cin >> O;
            if (board[O - 1] == ' ')
            {
                board[O - 1] = 'O';
                turn++;
                break;
            }
            cout << "Invalid input" << endl;
        }
        gameFinished = checkX(X, board);
        printBoard(board);
        if (gameFinished == 1)
        {
            cout << "\nPlayer X wins!\n";
            break;
        }
        if (gameFinished == 2)
        {
            cout << "\nPlayer O wins!\n";
            break;
        }
    }
    if (gameFinished == 1)
    {
        return 0;
    }
    else if (gameFinished == 2)
    {
        return 0;
    }
    else
    {
        cout << "\nCat's game!\n";
        return 0;
    }
}