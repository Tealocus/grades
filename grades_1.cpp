// program to print the grade recieved for CSCI 1300
// > 93 -> A

#include <iostream>
using namespace std;


int main()
{
    double score = 0;

    cout << "Enter the score you earned for CSCI 1300: ";
    cin >> score;

    if(score >= 93)
    {
        cout << "Grade: A" << endl; 
    }
    else if (score >= 90)
    {
        cout << "Grade: A-" << endl; 
    }
    else if (score >= 87)
    {
        cout << "Grade: B+" << endl; 
    }
    return 0;
}