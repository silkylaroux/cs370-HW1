#include <stdio.h>
#include <stdlib.h>
#include "Analyze.h"
#include <sys/resource.h>

int main(int argc, char **argv) 
{
   
    
    if (argc != 2)
    {
        printf("Incorrect number of arguments.\n");
        return -1;
    }
    else 
    {
        int seed = atoi(argv[1]);
        // set the seed
        srand(seed);
        // invoke the function in CreateArray
        printf("[Invoker] With seed: %d\n", seed);
        float running_ratio = get_running_ratio();
        printf("[Invoker] Running ratio: %f\n\n", running_ratio);
        return 0;
    }
}
