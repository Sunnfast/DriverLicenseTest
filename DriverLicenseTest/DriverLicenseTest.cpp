/*
 DriverLicenseTest
 by Simone Christen

 Takes user input for 20 questions as an array and grades them against the correct answers array.
 Grades the test and informs the user of the result in percentage and whether they achieved a passing score or failed.

 */

#include <iostream>
#include <string>
using namespace std;

void driverTest()
{}

int main()
{
    char correctAnswers[]={'B', 'D', 'A', 'A','C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};

    char input;
    cout << "Please enter your answers as a single character." << endl;
    char studentAnswers[20];
    float correctAnswerTotal = 0;


    for (int i = 0; i < 20; i++)
    {    

        cin >> input; 
        input = toupper(input); // converts input so that case doesn't matter

        studentAnswers[i] = input;
        

        if (studentAnswers[i] == correctAnswers[i])
        {
            correctAnswerTotal++;

            cout << "correct!" << '\n';
        }

 
       
    }

    cout << "The final results are: " << '\n';

    cout << "The total number you answered correctly is " << correctAnswerTotal << '\n';
    float percentage = correctAnswerTotal / 20 * 100;

    if (correctAnswerTotal >= 15)
        { 
        
        cout << "Congrats! You passed the test with a " << percentage << "%." << '\n';
        }

    else {
        cout << "Unfortunately, you only scored a " << percentage << "%. Better luck next time!" << '\n';
    }




    return 0;
}
