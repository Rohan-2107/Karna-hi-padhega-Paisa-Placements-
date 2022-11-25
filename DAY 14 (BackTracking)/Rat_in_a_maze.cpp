#include <iostream>

using namespace std;

bool isvalid(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **sol)
{
    if (x == n - 1 && y == n - 1)
    {
        sol[x][y] = 1;
        return true;
    }

    if (isvalid(arr, x, y, n))
    {
        sol[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, sol))
            return true;
        if (ratinMaze(arr, x, y + 1, n, sol))
            return true;
        sol[x][y] = 0;                  //BackTracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int** Solarr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        Solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            Solarr[i][j] = 0;
        }
    }

    cout<<endl;

    if (ratinMaze(arr, 0, 0, n, Solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << Solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}



// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1