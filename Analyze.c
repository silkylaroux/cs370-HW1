#include <stdio.h>
#include <stdlib.h>

/*
 * Takes in an int value and returns 1 if the value is a prime number, 0 if
 * it is a composite. Helper method for return_ratio.
 */
int is_prime(int num){

    for(int x = 2; x< (num/2); x++){
        if((num % x) == 0){

            return 0;
        }
    }

    return 1;
} 

/*
 * Takes in an array of integers and the number of elements in the array 
 * as arguments.
 * Then it will return the ratio of prime numbers to composite numbers
 */

float return_ratio(int *arr, int size)
{
    
    int primes = 0;
    for(int x = 0; x < size; x++){

        if(is_prime(arr[x])==1){
            primes++;
        }
    }

    // These are floats so that the division is done correctly, and the
    // correct ratio is returned.
    float primeFloat = (float)primes;
    float sizeFloat = (float)size;

    // ratio is the float with the ratio (primes/nonprimes) from the array
    float ratio = (primeFloat/(sizeFloat-primeFloat));
    return ratio;
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
    int random = rand(); 
    int iterCount = get_iteration_count(random); // Gets the amount of iterations

    printf("[Analyze] Number of Iterations: %d\n", iterCount);

    float average = 0;
    
    for(int x = 0; x < iterCount; x++){

       int size = get_arr_size(rand());
       int *arr = malloc(size*sizeof(int));     // Allocate space for array to hold rand values

       for(int y =0; y < size; y++){

            arr[y] = get_arr_val(rand()); 
       } 
       

       average = average + return_ratio(arr, size);

       free(arr);                               // Free mem for array
    }

    float iterCountFloat = (float)iterCount;

    average = average / iterCountFloat;         // Returns the average prime ratio of all the iterations
    return average;
}

