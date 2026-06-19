#include <bits/stdc++.h>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;

public:
    TicTacToe()
    {
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                board[i][j] =' ';
            }
              currentPlayer = 'X';
        }
    }

    void printBoard()
    {
        cout<<"\n BOARD :\n\n";
        cout << "  0 1 2\n";
        for (int i=0;i<3;i++)
        {
          cout << i << " ";
            for (int j=0;j<3;j++)
            {
                cout <<board[i][j];
                if (j < 2)
                  cout << "|";
            }
               cout <<"\n";
                 if (i < 2)
                   cout<<"  -----\n";
        }
    }

    bool isWin(char player)
    {
        for (int i=0;i<3;i++)
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
                return true;
        }
        for (int j=0;j<3;j++)
        {
            if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
                return true;
        }
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
            return true;
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
            return true;
        return false;
    }

    bool isDraw() {
        for (int i=0;i<3;i++)
            for (int j=0;j<3;j++)
                if (board[i][j] == ' ')
                    return false;
        return true;
    }

    bool makeMove(int row, int col, char player)
    {
        if (row>=0&&row<3&&col>=0&&col<3&&board[row][col]==' ')
        {
            board[row][col]=player;
            return true;
        }
        return false;
    }

    void switchPlayer()
    {
        currentPlayer=(currentPlayer=='X')?'O':'X';
    }

    int minimax(bool isMaximizing, int alpha, int beta)
    {
        if (isWin('X'))
            return 10;
        if (isWin('O'))
            return -10;
        if (isDraw())
            return 0;

        if (isMaximizing) {
            int bestScore = numeric_limits<int>::min();
            for (int i = 0; i < 3; ++i)
                {
                for (int j = 0; j < 3; ++j)
                {
                    if (board[i][j]==' ')
                    {
                        board[i][j]='X';
                        int score=minimax(false,alpha,beta);
                        board[i][j]=' ';
                        bestScore=max(score,bestScore);
                        alpha=max(alpha,score);
                        if(beta<=alpha)
                            return bestScore;
                    }
                }
            }
            return bestScore;
        }
         else
            {
            int worstScore=numeric_limits<int>::max();
            for (int i=0;i<3;i++)
                {
                for (int j = 0; j < 3; ++j)
                {
                    if (board[i][j]==' ')
                    {
                        board[i][j]='O';
                        int score=minimax(true,alpha,beta);
                        board[i][j]=' ';
                        worstScore=min(score,worstScore);
                        beta=min(beta,score);
                        if(beta<=alpha)
                            return worstScore;
                    }
                }
            }
            return worstScore;
        }
    }

    pair<int, int> findBestMove()
    {
        int bestScore=numeric_limits<int>::min();
          pair<int, int>bestMove={-1, -1};

        for (int i=0;i<3;i++)

        {
            for (int j=0;j<3;j++)
            {
                if (board[i][j]==' ')
                {
                    board[i][j]='X';
                    int moveScore=minimax(false,numeric_limits<int>::min(),numeric_limits<int>::max());
                    board[i][j]=' ';
                    if (moveScore>bestScore)
                    {
                        bestScore=moveScore;
                        bestMove={i, j};
                    }
                }
            }
        }

        return bestMove;
    }

    void play()
    {
        int row,col;
        while (true)
            {
             printBoard();
            if (currentPlayer=='X')
            {
                pair<int,int>bestMove=findBestMove();
                makeMove(bestMove.first, bestMove.second,currentPlayer);
            }
            else
            {
                cout<<"Player "<<currentPlayer<<" enter your move (row and column): ";
                cin>>row>>col;
                if (!makeMove(row, col,currentPlayer))
                {
                    cout<<"Invalid move. Try again.\n";
                    continue;
                }
            }

            if (isWin(currentPlayer))
            {
                printBoard();
                cout <<"Player "<<currentPlayer<<" wins!\n";
                break;
            }
            else if (isDraw())
            {
                printBoard();
                 cout<<"The game is a draw!\n";
                break;
            }

            switchPlayer();
        }
    }
};

int main()
{
    TicTacToe game;
    game.play();
    return 0;
}
