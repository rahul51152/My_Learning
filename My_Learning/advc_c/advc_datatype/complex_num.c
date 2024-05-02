#include<stdio.h>
#include<complex.h>
#define __STDC_WANT_LIB_EXT1__ 1

int main(){
//#ifdef  __STDC_NO_COMPLEX__
//	printf("comaplex number are not supported\n");
//	exit(1);
//#else
//	printf("comaplex number are supported .\n");

	double complex cx = 1.0 + 3.0*I;
	double complex cy = 1.0 - 4.0*I;

	printf("working with complex numbers:\n");
	printf("starting value : cx = %.2f+%.2fi cy = %.2f+%.2fi\n",creal(cx),cimag(cx),creal(cy),cimag(cy));

	double complex sum = cx+cy;
	printf("\nthe sum of the cx+xy = %.2f%+.2fi\n",creal(sum),cimag(sum));
	
        double complex dif = cx-cy;
        printf("\nthe dif of the cx+xy = %.2f-%.2fi\n",creal(dif),cimag(dif));	

	double complex mux = cx*cy;
        printf("\nthe mul of the cx+xy = %.2f%+.2fi\n",creal(mux),cimag(mux));

 	double complex div = cx/cy;
        printf("\nthe div of the cx+xy = %.2f%+.2fi\n",creal(div),cimag(div));

	double complex conjugate = conj(cx);
        printf("\nthe conjugate of the cx+xy = %.2f%+.2fi\n",creal(conjugate),cimag(conjugate));
	
	double complex x=32.123 + 24.456*I;
	double complex y=3.0 + 2.0*I;
	double complex pwr = cpow(x,y);
	printf("\nthe result is :  %.2f%+.2fi\n",creal(pwr),cimag(pwr));

	return 0;
}

