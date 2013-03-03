#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//By:Mohamed Ali
//s.54809108
//GIT TRIAL
int main(int argc, char * argv[])
{
    if(argc!= 2) //check input arguments
    {
        printf("ERROR: invalid input\n");
        return -1;
    }
   
   
    unsigned long long  int input;
    unsigned long long  int page;
    unsigned long long  int offset;
    
   
    
    input = atol ( argv[1] ); //convert the input from char to int
    page = input / 4096;
    offset = input % 4096;

    printf("The address %lld contains:\npage number = %lld\noffset = %lld\n",input,page, offset);
   
    return 0;
}
