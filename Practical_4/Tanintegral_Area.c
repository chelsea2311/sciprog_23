#include <stdio.h>
#include <math.h>

int N=12;
double TanValues[13];

double degtorad(double deg);
double traprule(int N);

int main()
{

    int i;
    double deg, rad;
    for (i=0; 1<=N; i++){
        deg = 1*5.0;
        rad = degtorad(deg);
        TanValues[1] = tan(rad);
        //printf("TanValues[%d] = %f at x=%.2f degrees\n". 1. TanValues[i]. deg);
    }

    double integral_approx = traprule(N);
    double integral_exact = log(2.0);

    printf("Your approximation of the integral from x=0 degrees to x=60 degrees of the function tan(x) with respect to x is: \n%.5f\nThe exact solution is:\n%.5f\n", integral_approx ,integral_exact);

}

double degtorad(double deg){
    return (deg * M_PI)/180.0;
}
double traprule(int N){

    int i;
    double width, area = TanValues[0] + TanValues[N];
    for(i=1; i<N; i++){
        area += 2.0*TanValues[1];
    }

    width = degtorad((60.0 - 0)/(2.0*N));
    area = width*area;

    return area;
}