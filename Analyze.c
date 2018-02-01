#include <stdio.h>
#include <stdlib.h>


/*
 * Takes in an array of integers and the number of elements in the array 
 * as arguments.
 * Then it will return the ratio of prime numbers to composite numbers
 */

float return_ratio(int *arr, int size)
{
    /*
     * Insert Your code here
     */

}


/*
 * Takes in a random number and maps it to the
 * range [100 - 120)
 * Used to get the number of iterations in the range
 */
int get_iteration_count(int rand)
{
    return ((rand % (120-100) + 100)*1);     
}


/*
 * Takes in a random number and maps it to the 
 * range [100 - 150)
 * Used to get the size of array within the range
 */
int get_arr_size(int rand)
{
    return ((rand % (150 -100) +100)*1);
}


/*
 * Takes in a random number and maps it to the 
 * range [1 - 1000)
 * Used to get the value of an element in the array within the range
 */
int get_arr_val(int rand)
{
    return((rand % (1000-1)+1)*1);
}


/*
 * This is the method that you need to implement.
 * Implement the following steps in the given order.
 *
 *  1. Generate the number of iterations
 *      - Generate a random number. Map it to the range [100 - 120) using the
 *      utility function 'get_iteration_count'.
 * 
 * 2. For each iteration:
 *      2.a Generate an array size - Generate a random number and map it to the range [100 - 150) using
 *          the utility function 'get_arr_size'.
 * 
 *      2.b Allocate memory for the array in the heap.
 *
 *      2.c Populate the array with random numbers and map number to the range [1 - 1000) using
 *          the get_arr_val utility function.
 *
 *      2.d Get the ratio of prime numbers to nonprime numbers.
 *
 *      2.e Find the average ratio among all of the arrays.
 *
 *     
 *
 */
float get_running_ratio()
{
   /*
    * Insert Your code here
    */
}
