#include <iostream>
#include <cmath>

using namespace std;

/**
 * Problem 03 - Largest prime factor
 * 
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * 
 * What is the largest prime factor of the number 600851475143 ?
 */
bool isPrime(long number_)
{
    // Corner cases
    if (number_ <= 1)
        return false;
    if (number_ <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (number_ % 2 == 0 || number_ % 3 == 0)
        return false;

    // Test for multiples of 5 and 7
    for (int i = 5; i * i <= number_; i = i + 6)
        if (number_ % i == 0 || number_ % (i + 2) == 0)
            return false; // not prime

    return true; // is prime
}

long largestPrimeFactor(long number_)
{
    long largestFactor = 1;
    long mid = floor(number_ / 2);

    for (auto i = 2; i < mid; i++)
    {
        if (number_ % i == 0 && isPrime(i))
            largestFactor = i;
    }

    return largestFactor;
}

int main()
{
    long number = 600851475143;

    // Call the solution function
    auto result = largestPrimeFactor(number);

    cout << "<<< Result: " << result << endl;

    /* ============================================================================== */

    // Finish the program
    cout << "Finished successfully!\n";
    return EXIT_SUCCESS;
}