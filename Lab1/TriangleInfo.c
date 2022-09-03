#include <stdio.h>
#include <math.h>
#include <conio.h>
 
int main(){
    float sideOne, sideTwo, sideThree, s, area;
    printf("Enter side 1: ");
    scanf("%f", &sideOne);
    printf("Enter side 2: ");
    scanf("%f", &sideTwo);
    printf("Enter side 3: ");
    scanf("%f", &sideThree);
    
    /* Area of any triangle = 
       sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree))
       Where s = (sideOne + sideTwo + sideThree)/2  */
    s = (sideOne + sideTwo + sideThree)/2;
    area = sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
    if(sideOne == sideTwo && sideTwo == sideThree)
      printf("Equilateral\n");
    else if(sideOne == sideTwo || sideTwo == sideThree || sideThree == sideOne)
      printf("Isosceles\n");
    else if (sideOne + sideTwo < sideThree || sideOne + sideThree < sideTwo || sideThree + sideTwo < sideOne)
      printf("Impossible \n" );
    else
      printf("Scalene\n");
    printf("Area of triangle : %0.4f\n", area);

    getch();
    return 0;
}