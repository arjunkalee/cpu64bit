#include <stdio.h>
#include <stdlib.h>


int main(){
    int arr[4] = {3,4,4,3}; //Initialize an array of a fixed size
    int result = 0; 
    //Get the intitial parameters for the while loop
    int start_index = 0;
    int end_index = 3;
    while(start_index < end_index){ //Compare indexes to check when array is checked completely
        int val1 = arr[start_index];
        int val2 = arr[end_index];
        if(val1 != val2){ //Compare val1 and val2 to see if there not the same
            result = 0;
            return result;
        }
        //Update indices
        start_index++;
        end_index--;
    }
    result = 1;
    return result;
}
