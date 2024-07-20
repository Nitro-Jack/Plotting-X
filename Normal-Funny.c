#include <stdio.h>
int main() 
{
    int unobool = 1;
    //unobool represents boolean values, I most of time use spanish numbers to differentiate boolean values.
    // This boolean affects how printing out is handeled. If it is set to 1, there will be an indent for the begining of a line.
    // If the boolean is 0, then there is no indent. 
    int xnum = 5;
    // My challange was to only only print out one X at a time, so with affects the loop in printing in a particular line.
    int linenum = 0;
    //This value assists in changing the of lines.
	 
    while (linenum < 5) 
	{  
        printing(unobool, xnum);
        unobool = !unobool;     
        linenum++;
    }   
    return 0;
}
void printing(int unobool, int xnum) 
{
    int looper = 0;
    while (looper < xnum) 
	{
        if (unobool == 1) 
		{
            printf(" X");
        } 
		else 
		{
            printf("X ");
        }
        looper++;
    }
    printf("\n");  
}