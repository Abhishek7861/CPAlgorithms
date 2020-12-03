#include <iostream>
using namespace std;

/*
Problem is to print n*n matrix spirally where n will be odd number.
Ex:
for n=3
    1 2 3
    4 5 6
    7 8 9
O/P = 5 6 9 8 7 4 1 2 3

for n=5
    1   2   3   4   5
    6   7   8   9   10
    11  12  13  14  15
    16  17  18  19  20
    21  22  23  24  25
O/P = 13 14 19 18 17 12 7 8 9 10 15 20 25 24 23 22 21 16 11 6 1 2 3 4 5
*/





int Mat[15][15];

void Sol(int n)
{
    int x=n/2,y=n/2;
    int movement=0;
    int left=0;
    char direction = 'R';
    cout<<Mat[x][y]<<" ";
    
    while(1)
    {
        if(direction=='R')
        {
            movement++;
            direction='D';
            for(int i=0;i<movement;i++)
            {
                cout<<Mat[x][++y]<<" ";
                if(x==0 and y==n-1)
                    return;
            }
        }
        else if(direction=='D')
        {
            direction='L';
            for(int i=0;i<movement;i++)
            {
                cout<<Mat[++x][y]<<" ";
            }
        }
        else if(direction=='L')
        {
            movement++;
            direction='U';
            for(int i=0;i<movement;i++)
            {
                cout<<Mat[x][--y]<<" ";
            }
        }
        else if(direction=='U')
        {
            direction='R';
            for(int i=0;i<movement;i++)
            {
                cout<<Mat[--x][y]<<" ";
            }
        }
    }    
}


int main()
{
    int n=3;
    int count=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            Mat[i][j] = count++;

    Sol(n);
    cout<<endl;
    return 0;
}
