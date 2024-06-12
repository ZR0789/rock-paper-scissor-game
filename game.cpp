#include <iostream>
#include <cstdlib> 
#include <string>
#include<ctime>
using namespace std;
int main()
{
    string input, predefined;int defined;bool guess= false;
    size_t tries=0;
    try {
        while (guess == false)
        {
            srand(time(0));
            defined = rand() % 3 + 1;
            switch (defined)
            {
            case 1:predefined = "Rock";break;
            case 2: predefined = "Paper";break;
            case 3: predefined = "Scissor";break;
            }
            cout << "Enter Rock Paper Scissor\n";
            getline(cin, input);
            if (input != "Rock" || input != "R" || input != "Paper" || input != "P" || input != "Scissor" || input != "S")
                throw input;
            ++tries;
            if (predefined[0] == input[0])
            {
                cout << "Won\n";
                guess = true;
                cout << "Tries: " << tries << endl;
            }
            else
                cout << "Lost I had: " << pre << endl;
        }
    }
    catch(string)
    {
        cout << "Exception thrown: Invalid input\n";
    }
    return 0;
}
int mainB()
{
    int defined;bool guess = false;
    char pre,in;
    size_t tries = 0;
    while (guess == false)
    {
        srand(time(0));
        defined = rand() % 3 + 1;
        switch (defined)
        {
        case 1:pre = 'R';break;
        case 2: pre = 'P';break;
        case 3: pre = 'S';break;
        }
        cout << "Enter Rock Paper Scissor(r,p,s)\n";
        cin >> in;
        ++tries;
        if (pre == in)
        {
            cout << "Won\n";
            guess = true;
            cout << "Tries: " << tries << endl;
        }
        else
            if (pre=='R')
            cout << "Lost I had: Rock "  << endl;
            else if(pre == 'S')
                cout << "Lost I had: Scissor " << endl;
            else 
                cout << "Lost I had: Paper " << endl;
    }
    return 0;
}

