/******************************************************************************! 
*\brief  Answer to Exercise 1-3.c
*           Temperature conversion table with heading..
*@file   Exercise1-3.c
*******************************************************************************/
#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower linit of temperature tables */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower; 
    printf("Fahreneit Celsius\n");
    printf("-------- --------\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}


