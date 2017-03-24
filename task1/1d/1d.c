#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv){
int* p;
int iarray[] = {1, 2, 3};
char carray[] = {'a', 'b', 'c'};
int* iarrayPtr;
char* carrayPtr;
for(int i = 0;i < 3; i++){
iarrayPtr = &iarray[0 + i];
carrayPtr = &carray[0 + i];
printf("%d \n" ,*iarrayPtr);
printf("%c \n" ,*carrayPtr);
}
printf("%p",p);
return 0;
}
