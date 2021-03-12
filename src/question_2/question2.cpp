#include "question2.h"

void pass_by_val_and_ref(int num1, int& num2)
{
    num1 = 20;
    num2 = 50;
}



/*
Function pass_by_const_ref 
Try to assign a value to num1, generates error.
@param const int& num
@return does not return a value
*/
void pass_by_const_ref(const int& num)
{
    
}