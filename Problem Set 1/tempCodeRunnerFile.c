/*
  Alex Mak
  1584710

  List any resources you used below (eg. urls, name of the algorithm from our code archive).
  Remember, you are permitted to get help with general concepts about algorithms
  and problem solving, but you are not permitted to hunt down solutions to
  these particular problems!

  I didn't use any resources on this problem.

  List any classmate you discussed the problem with. Remember, you can only
  have high-level verbal discussions. No code should be shared, developed,
  or even looked at in these chats. No formulas or pseudocode should be
  written or shared in these chats.

  I did not discuss with anyone on this problem.

  By submitting this code, you are agreeing that you have solved in accordance
  with the collaboration policy in CMPUT 403.
*/

#include <stdio.h>

int alist[1000001];
int l, n, num_cases;

// Function to get minimum of 2 values
int MIN(a, b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Function to get minimum of 2 values
int MAX(a, b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    // Read the number of cases
    scanf("%d", &num_cases);
    int min = 0;
    int max = 0;

    while (num_cases--)
    {
        // Read l and n in the next lines until a new case
        scanf("%d %d", &l, &n);

        // Use for loop to read inputs and update minimum and maximum time values, no need to store the changes
        for (int i = 0; i < n; i++)
        {
            // read all the locations of n
            scanf("%d", &alist[i]);

            // For minimum time, find the maximum between the current minimum time, and the minumum time that the ant fall (in either end of the pole)
            min = MAX(min, MIN(alist[i], l - alist[i]));

            // For maximum time, find the maximum between the current maximum time, and the maxumum time that the ant fall (in either end of the pole)
            max = MAX(max, MAX(alist[i], l - alist[i]));
        }
        // Print Output
        printf("%d %d\n", min, max);
    }
    return 0;
}