#include<stdio.h>
#include<math.h>
#define PI 3.141592654
#define g 32.17
int main()
{
    double theta,distance,velocity;
    scanf("Theta: %lf Distance: %lf Velocity: %lf",theta,distance,velocity);
    double time=distance/(velocity*cos(theta*(180/PI)));
    double height=velocity*sin(theta*(180/PI))*time-(g*time*time)/2;
    printf("Time: %lf sec \n Distance: %lf ft",time,distance);

}