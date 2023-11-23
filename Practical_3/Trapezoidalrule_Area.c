#include<stdio.h>
#include<math.h>

int main(){

// Initialise Number of points and the endpoints 
int N=12;
double u =0.0;
double v = M_PI/3.0;
double width = (v- u)/(double)N;

// Get values of f(x)=tan(x) for the end points and sum it up
double X = tan(u)+tan(v);

//Get equidistant points, evaluate tan at this points, store 2tan(x) at each point

double x;
double y;
double sum = X;
  
int i = 1;
while (i<12){
  
    x = u + width*i;
    y = tan(x);
    sum += 2*y;
    i++;
 
}
  
double integral_approx = sum * width * 0.5;
double integral_exact  = log(2.0);

printf(" Your approximation of the integral from x=0 to x=pi/3 of the function tan(x) with respect to xis: \n%.5f\nThe exact solution is:\n%.5f\n", integral_approx, integral_exact);

return(0);
}