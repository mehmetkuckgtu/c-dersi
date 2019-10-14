#include<stdio.h>
#include<math.h>
#define pi 3.141592


int main()
{
    double x,sinx,n,x1,degre,x2;
    double fak=1.0,forx=0.0,fory=0.0;
    double z=1.0,r=0.0,h=0.0,b=1.0;

    printf("x degerini giriniz ");
    scanf("%lf",&x);
    x1=x*pi/180;//radyana çeviriyoruz
    n=sin(x1);//saglama

    int g;
        for(g=1;g<150;g=2*g+1)
        {

        	int i;
        	for(i=1;i<=(2*g+1);i+=1)
	        {
	            fak*=b;
	
	            b+=1.0;
	        }
        	h=2.0*z+1.0;
        	forx=(pow(-1.0,z)*pow(x1,h))/(fak);
        	fory+=forx;
        	z+=1.0;

        }

    sinx=x1+fory;
    degre=asin(sinx);
    x2=degre*180/pi;
    printf("%f\n",x2);
    printf("%f\n",fory);
    printf("%f\n",sinx);
    printf("%f\n",n);


    return(0);
}
