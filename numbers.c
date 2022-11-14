/******************************************************************************
filename    numbers.c
author      Joey Laybourn
DP email    j.laybourn@digipen.edu
course      CS120
section     A
lab         3
due date    9/26/2017

Brief Description:
This program prompts the user for 3 numbers, then outputs the sine, cosine, 
tangent, and arctangent of these numbers.  

******************************************************************************/
#include <stdio.h> /*printf, scanf*/
#include <math.h> /*sin, cos, tan, atan*/

int main(void)
{
  float input1, input2, input3; /*initializes the variables*/
  printf("Enter 3 numbers between 0 and 9.999: "); /*prompts the user
                                                       for input       */
  scanf("%f %f %f", &input1, &input2, &input3); /*gets user input*/

  printf("\nNumber      sin      cos      tan      atan\n"); /*prints output*/
  printf("-------------------------------------------\n");
  printf("%.5f%9.3f%9.3f%9.3f%9.3f\n", input1, sin(input1), cos(input1), 
         tan(input1), atan(input1));
  printf("%.5f%9.3f%9.3f%9.3f%9.3f\n", input2, sin(input2), cos(input2),
         tan(input2), atan(input2));
  printf("%.5f%9.3f%9.3f%9.3f%9.3f\n", input3, sin(input3), cos(input3),
          tan(input3), atan(input3));
  return 0; 
}