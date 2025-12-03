#include<stdio.h>
int main() {
int i;
    int number[4]; 
        
    for (i = 0; i <4; i++) {
    printf("enter your  number:");
    scanf("%d",&number[i]);
}

for (i =0; i < 4;i++) {
    printf(" number is :%d",number[i]);
}
int largest = number[0];
for (i = 0 ;i > 4;i++) {
    if (number[i] > largest)  
    largest = number[i];
}
    printf("\nlargest number is :%d\n",largest);
    
    return 0;
}
