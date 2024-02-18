#include<stdio.h>
#include <stdbool.h>


bool hasThe(int num) {

    if(num/100>=1 && num/1000==0)
    {
        return true;
    }
    else  
    {
        return false;
    }
}
void findThree(int num, int *a1, int *a2, int *a3) {

    if(hasThe(num))
    {
        *a1= num/100;
        *a2=(num-(*a1*100)) /10;
        *a3= num -((*a1*100) + (*a2 *10));
    }
    
}
void sumThree(int a1, int a2, int a3, int *sum) {

    *sum=a1+a2+a3;
}

int main() {

    int num;
    int a1,a2,a3;
    int sum;
    while(true)
    {
        printf("Please enter a num\n");
        scanf("%d", &num);
        findThree(num,&a1,&a2,&a3);
        printf("%d\n%d\n%d\n", a1, a2, a3);
        sumThree(a1,a2,a3,&sum);
        printf("SUM = %d\n",sum);
    }
    return 0;
}