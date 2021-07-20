#include <iostream>

using namespace std;

/**
 * Problem 01 - Multiples of 3 and 5
 * 
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
int sumMultiples3And5(int maxRange_)
{
    int sum = 0;

    for (auto i = 1; i < maxRange_; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    
    return sum;
}

int main()
{
    int natural = 1000;

    // Call the solution function
    auto result = sumMultiples3And5(natural);

    cout << "<<< Result: " << result << endl;

    /* ============================================================================== */

    // Finish the program
    cout << "Finished successfully!\n";
    return EXIT_SUCCESS;
}