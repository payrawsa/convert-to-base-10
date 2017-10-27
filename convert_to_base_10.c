#include <string.h>
#include <stdio.h>
#include <math.h>
int X;
int Y;
int base=0;
int one;
char input1[50];
char input2[50];
int finalanswer;


int number(char one){

if(one=='F'){
base=16;
}
else if (one=='E' && base<16){

base=15;

}

else if (one=='D' && base<15){

base=14;

}
else if (one=='C' && base<14){

base=13;

}

else if (one=='B' && base<13){

base=12;

}
else if (one=='A' && base<12){

base=11;

}
else if(base<11) {
if (base<=one-48+1){
base=(one-48)+1;
}
}


return base;
}

int number2 (char input[], int one){
    for (int i=0; i<one; i++) {
base= number(input[i]);
}
int placeholder;
int answer=0;
placeholder=base;
int p=0;
for (int i=one-1; i>=0; i--){

base=0;
base=number(input[i]);
answer=answer+(base-1)*pow(placeholder, p);
p++;
}
p=0;
return answer;
}

int main (){

scanf("%s",&input1);
scanf("%s",&input2);
int one=strlen(input1);
int two= strlen(input2);

finalanswer= number2(input1,one);
base=0;
finalanswer= number2(input2,two)+finalanswer;
printf("your answer is: %i", finalanswer);

return 0;
}