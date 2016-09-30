/**
 * @file    util.c
 * @author  Alan Jeferson and Levi Moreira
 * @version V1.1.0
 * @date    25-August-2016
 * @brief   This file contains the implementations for the
 *          auxiliar functions, i.e. print functions.
 * */

#include <stdio.h>
#include "util.h"
#include "defines.h"




/**
 * @brief Prints the confusion matrix of the model.
 * */
void printConfusionMatrix()
{
    printf("------------------Confusion Matrix for the Model------------------\n");
    char i, j;

    printf("          ");
    for(i = 0; i<CLASSES; i++)
    {
	printf(" C%d   ",i);
    }
    printf("\n");
    for(i = 0; i<CLASSES;i++)
    {
        printf("Class %d |",i);
        for(j = 0; j<CLASSES;j++)
            printf("  %d   ",confusionMatrix[i][j] );
        printf("\n");
    }
}