#include<iostream>
using namespace std;

int main()
{
    int mark[3][5];
    char ch ='A';
    int sum = 0;
    int percent;

    for(int i=0; i<3; i++)
    {
        cout << "Enter the mark" << ch << ":\n" ;
        for(int j=0; j<5; j++)
        {
            cin >> mark[i][j];
        }
        ch++;
    }

    cout << mark[3][5];
    ch ='A';

    for(int k=0; k<3; k++)
    {
        for(int l=0; l<5; l++)
        {
            sum = sum + mark[k][l];
            percent = sum/5;
        }
        cout << sum << "\n";

        if(percent >= 35){
            cout << percent << " Pass";
        }
        else{
            cout << percent << "fail";
        }
    }
    return 0;
}
