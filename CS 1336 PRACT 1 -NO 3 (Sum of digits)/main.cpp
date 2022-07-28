/*

This program will calculate the sum of digits in a 5 digit number.


1. Ask the user to input the 5 digit number.
2. Validate the user's input. (while loop)
        Check if the number is a 5-digit one.
            If entry is false: ask the user to input a new 5-digit number.
            If entry is true escape the loop.

3. Extract each of the digits from the number.
4. Calculate the sum of the 5 digit number.
5. Display the sum of the digits to the user.

*/


// This program will calculate the sum of digits in a 5 digit number.

#include <iostream>

using namespace std ;

int main()
{
        // Declare variables.
    int number ;  //  The five-digit number.
    int firstDigit ;  // The first digit of the number.
    int secondDigit ;  //  The second digit of the number.
    int thirdDigit ;  //  The third digit of the number.
    int fourthDigit ;  //  The fourth digit of the number.
    int fifthDigit ;  //  The fifth digit of the number.
    int remainingNumber ;  // To hold the remaining parts of the number used in calculations.
    int sum ;  // The sum of the digits in the number.

        // Ask the user to input the 5 digit number.
    cout << "Enter a five digit number: " ;
    cin >> number ;

        // Validate the user's input.
    while ( number > 99999 || number < 10000 )
    {
           // Ask the user to input the 5 digit number.
        cout << "Please enter a five digit number: " ;
        cin >> number ;
    }

        // Get the first digit.
    firstDigit = number / 10000 ;
    remainingNumber = number % 10000 ;

        // Get the second digit.
    secondDigit = remainingNumber / 1000 ;
    remainingNumber %= 1000 ;

        // Get the third digit.
    thirdDigit = remainingNumber / 100 ;
    remainingNumber %= 100 ;

        // Get the fourth digit.
    fourthDigit = remainingNumber / 10 ;
    remainingNumber %= 10 ;

        // Get the fifth digit.
    fifthDigit = remainingNumber ;

        // Calculate the sum of the 5 digit number.
    sum = firstDigit + secondDigit + thirdDigit + fourthDigit + fifthDigit ;

        // Display the sum of the digits to the user.
    cout << "The sum of the number's digits is: " << sum << endl ;

    return 0;
}

/*

    RUN 1: Number = 10000

Enter a five digit number: 10000
The sum of the number's digits is: 1

    -------------------------------------------

    RUN 2: Number = 2345, -1, 9999, 23100

Enter a five digit number: 2345
Please enter a five digit number: -1
Please enter a five digit number: 9999
Please enter a five digit number: 23100
The sum of the number's digits is: 6

    ---------------------------------------------

    RUN 3: Number = 99999

Enter a five digit number: 99999
The sum of the number's digits is: 45

    --------------------------------------------

    RUN 4: Number = 34543

Enter a five digit number: 34543
The sum of the number's digits is: 19

*/
