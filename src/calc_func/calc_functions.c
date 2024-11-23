#include "calc_functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void calc_menu(char check_for_list_operation){

    printf("******** CPLUSPLUS CALC ********\n");
    printf("1. Plus/Minus (unavailable)\n");
    printf("2. Entropy solver\n");
    printf("3. Probabilities\n");
    printf("Choose: ");

    scanf("%c", &check_for_list_operation);

    //Menu handler
    switch (check_for_list_operation)
    {
    /*case '1': plus_minus_func();
        break; */
    case '2' : entropy_solver(); 
        break;
    case '3' : some_func();
        break;
    
    default: printf("Expected 2 or 3, but %d\n", check_for_list_operation); printf("********************************\n");
        break;
    }
}

void entropy_solver(){

    double p_i = 0.0, sum = 0; int n = 0;

    printf("******** ENTROPY SOLVER ********\n");
    printf("Type number of probabilities: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        printf("Type probabilities: ");
        scanf("%lf", &p_i);
        printf("Entropy %d: %lf\n", i, -p_i * log2(p_i));
        sum += -p_i * log2(p_i);
    }

    printf("Sum: %lf\n", sum);
    printf("********************************\n");

}

void some_func(){

    printf("******** PROBABILITIES ********\n");

    int numerator = 0,
    denominator = 0, 
    hypothesis_numerator = 0, 
    hypothesis_denominator = 0, 
    number_of_hypothesis, 
    res_of_num = 0, 
    res_of_denom = 0;

    printf("Type a number of hypotheses: ");
    scanf("%d", &number_of_hypothesis);

    printf("Type a denominator of hypothesis: ");
    scanf("&d", &hypothesis_denominator);

    printf("Type a denominator of hypothesises probabilitie: ");
    scanf("%d",&denominator);

    res_of_denom = hypothesis_denominator * denominator;

    printf("\n");

    for(int i = 1; i <= number_of_hypothesis; i++){
        printf("Type numerator of hypothes: %d", i); 
        scanf("%d", &hypothesis_numerator);

        printf("Type numerator of hypothesis probabilitie: %d", i);
        scanf("%d", &numerator);

        res_of_num += hypothesis_numerator * numerator;
    }

    printf("Result: %d/%d", res_of_num, res_of_denom);
    printf("********************************\n");
}