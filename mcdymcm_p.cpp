#include <iostream>
void MCDyMCM(int a, int b, int *mcd, int *mcm);
int min()
{
    int x = 18, y = 24;
    int rMCD, rMCM;
    MCDyMCM(x, y, &rMCD, &rMCM);
    cout << "MCD: " << rMCD << endl;
    cout << "MCM: " << rMCM << endl;
    return 0;
}

void MCDy, MCM(int a, int b, int *mcd, int *mcm)
{
    int i;
    i = 1;
    *mcd = 1;
    while (1 <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            *mcd = 1;
        }
        i = i + 1;
    }
    *mcm = (a * b) / (*mcd);
}