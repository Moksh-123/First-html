#include<stdio.h>
#include<conio.h>

// int main(){
// 	int a = 10, b = 20, c;

// 	c=a; //value given to c c=10 b=20 a=
// 	a=b; // value given a c=10 b= a=20
// 	b=c;

// 	printf("a %d",a);
// 	printf("b %d",b); 
	
// } //With third variable
 
#include<stdio.h>

int main()
{
    
    int n1,n2;
     
    printf("Enter the value of n1:");
    scanf("%d",&n1);
    
    printf("Enter the value of n2:");
    scanf("%d",&n2);
    
    while(n1<n2) // 5<10
    {
        printf("%d",n1);
        if(n2<n1)
            {
                printf("%d",n2);
                n2++;
            }
        else
        {
            printf("%d",n1);
            n1--;
        }
    }
    
    return 0;
}
