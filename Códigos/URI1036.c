#include<stdlib.h>
#include<math.h>
int main()
{
    double A,B,C,R1,R2,delta;
    scanf("%lf %lf %lf",&A,&B,&C);
    delta=pow(B,2)-4*A*C;
    if(A==0||delta<0)
		printf("Impossivel calcular\n");
    else{
		R1=(-B+sqrt(delta))/(2*A);
    		R2=(-B-sqrt(delta))/(2*A);
    		printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2); 
    }
    return 0;
}
