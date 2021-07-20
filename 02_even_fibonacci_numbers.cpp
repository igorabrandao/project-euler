#include <iostream>

using namespace std;

/**
 * Problem 02 - Even Fibonacci numbers
 * 
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
 * By starting with 1 and 2, the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
 * find the sum of the even-valued terms.
 */
long fibonacciEvenSum(int maxTerm_)
{
    long evenSum = 0;
    long prevTerm = 1, currTerm = 1;

    cout << currTerm << " ";

    while (currTerm < maxTerm_)
    {
        // Shift the fibonnaci terms
        currTerm += prevTerm;
        prevTerm = (currTerm - prevTerm);

        if (currTerm % 2 == 0)
            evenSum += currTerm;

        // Print the fibonnaci
        cout << currTerm << " ";
    }

    cout << endl;

    return evenSum;
}

int main()
{
    long maxFibTerm = 4000000;

    // Call the solution function
    auto result = fibonacciEvenSum(maxFibTerm);

    cout << "<<< Result: " << result << endl;

    /* ============================================================================== */

    // Finish the program
    cout << "Finished successfully!\n";
    return EXIT_SUCCESS;
}