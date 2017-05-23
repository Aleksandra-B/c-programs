#include <stdio.h>
#include <stdlib.h>
 
typedef struct complex

{
  float real, imag;
  }complex;

 	

complex add(complex n1, complex n2)
{
      complex res ;
      res.real = n1.real + n2.real;
      res.imag = n1.imag + n2.imag;
      return(res);
}

complex cRead(complex n){
    complex n1;
    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);
    return (n1);
    }
    
complex cPrint (complex n)  {
    complex n1;
    printf("Your number is:%.1f + %.1fi\n ",n1.real, n1.imag);
    return (n1);
    
}  
complex cMul(complex n1, complex n2){
    complex res1;
    res1.real= n1.real*n2.real- n1.imag*n2.imag;
    res1.imag= n1.imag*n2.real+n1.real*n2.imag;
	return(res1);

}

complex cDiv (complex n1, complex n2) {
	 complex res1;
	 float temp1, temp2, temp3;
	 if ( n2.real == 0 && n2.imag == 0 ){
        printf("Division by 0 + 0i is not allowed.");
        res1.real=0;
        res1.imag=0;
        
                }
         else{       
        temp1 = n1.real*n2.real + n1.imag*n2.imag;  //temp1*temp2/temp3*temp2
        temp2 = n1.imag*n2.real - n1.imag*n2.imag;
        temp3 = n2.real*n2.real + n2.imag*n2.imag; 
        res1.real=temp1/temp3;
        res1.imag=temp2/temp3;}
        return(res1);
        }
	 
	 
complex cConj(complex n){
	complex res1;
	res1.real=n.real;
	res1.imag=-n.imag;
	return(res1);
}	 
 complex cIm (complex n, float v){

	v= n.imag;
	return(v);
}

 complex  cReal (complex n, float v){

	v= n.real;
	return(v);
}

 complex cAbs (complex n, float n){
	n = n.real*n.real+ n.imag*n.imag;
	return(n);
}


complex cArg (complex n, float n){
	n = arctg(n.real/n.imag);
	return (n);
}

complex sub(complex n1, complex n2 )
{
	  complex res1 ;
      res1.real = n1.real - n2.real;
      res1.imag = n1.imag - n2.imag;
      return(res1);
}
int main()
{
    complex n1, c2,n2,i,j, temp,temp1,temp2,temp3,temp4;

   n1=cRead(n1);
   n2=cRead(n2);

    i=n1;
    j=n2;
    temp = add(n1, n2);
    temp1= sub(i,j);
    temp2=cMul(i,j);
    temp3=cDiv(i,j);
    temp4=cConj(i);
    printf("Sum = %.1f + %.1fi\n", temp.real, temp.imag);
    printf("Difference is  = %.1f - %.1fi\n", temp1.real, temp1.imag);
    printf("Multiple  is  = %.1f + %.1fi\n", temp2.real, temp2.imag);
    printf("Dividence is  = %.1f + %.1fi\n", temp3.real, temp3.imag); 
    printf("cConj is  = %.1f + %.1fi\n", temp4.real, temp4.imag);     
    
    return 0;
}


 
 
 
