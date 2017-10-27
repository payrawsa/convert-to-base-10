#include <math.h>
#include <stdio.h>
#include <string.h>
int one;
int power7;
int power3;
int power2;
int temp;
int number;

int numberchecker (int numbers){
    if(number==one){
                printf("%i", power7);
                printf(" %i", power3);
                printf(" %i\n", temp);
                                 --temp;

    }
            else if (number<one){
                power3++;
            }
            else{
                if(temp==0){
                }
                else{
                temp--;
                }}
    return 7*power7+3*power3+2*temp;
}

void print3(int power2, int power7){
    power3=0;
    temp=power2;
    number= 7*power7+3*power3+2*temp;
    while(temp!=0){
        
        number=numberchecker(number);
        
    }
    number=numberchecker(number);
    
}

void print7(int power2){
    temp=power2;
    int max= one/7;
    while(power7<max){
    power7++;
    temp=power2;
    print3(temp, power7);
    }
}
    
int main() {
    scanf("%i", &one);
    power2=one/2;
    print3(power2, 0);
    print7(power2);

    return 0;
}

