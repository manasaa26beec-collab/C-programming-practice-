#include <stdio.h>
int main()
{    printf("Hello EC World");
    return 0;
}


//Program 2: Even or Odd 
//Output: Odd
#include <stdio.h>
int main()
{   int a=7;
    if(a%2==O);
      printf("Even");
    else 
      printf ("Odd");
    return 0;
}


//Program 3: Addition of two numbers 
//Output: 15
#include <stdio.h>
int main()
{   int a=10,b=5;
    printf("sum=%d",a+b);
    return 0;
}


//program 4:largest of two numbers
//output:largest is 20
#include <stdio.h>

void main()
{
    int a,b,big;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    big=(a>b)?a:b;
    printf("the biggest of %d and %d\n",a,b,big);
}    


//program 5:largest of three numbers
//output:largest is 30
#include <stdio.h>

void main()
{
    int a,b,c,big;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("the biggest number is of %d\n",big);
    
}   


//program 6:pre increment operator
//output:21 20
#include <stdio.h>

void main()
{
    int a=20;
    int b;
    b=a++;
    printf("%d",a);
    printf("%d",b);
    
}    


//program 7:post increment operator
//output:21 21
#include <stdio.h>

void main()
{
    int a=20;
    int b;
    b=++a;
    printf("%d",a);
    printf("%d",b);
    
}   


//program 8:pre decrement operator
//output:19 20
#include <stdio.h>

void main()
{
    int a=20;
    int b;
    b=a--;
    printf("%d",a);
    printf("%d",b);
}


//program 9:post decrement operator
//output:19 19
#include <stdio.h>

void main()
{
    int a=20;
    int b;
    b=--a;
    printf("%d",a);
    printf("%d",b);
}


//program 10:bitwise operators
//output:c=2 d=14 e=12
#include <stdio.h>

void main()
{
    int a,b,c,d,e;
    a=10;
    b=6;
    c=a&b;
    d=a|b;
    e=a^b;
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
}
