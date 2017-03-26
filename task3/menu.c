#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct func_desc{
    char *name;
    char (*fun)(char);
};

char censor(char c) {
  if(c == '!')
    return '.';
  else
    return c;
}

char encrypt(char c){
    if( c >= 0x20 && c <= 0x7E){
        c = c + 0x3;
    }
    return c;
}

char decrypt(char c){
    if( c >= 0x20 && c <= 0x7E){
        c = c - 0x3;
    }
    return c;
    
}
            
char xprt(char c){
    printf("0x%X \n", c);
    return c;
}
       
char cprt(char c){
    if( c >= 0x20 && c <= 0x7E){

        printf("%c \n",c);
    }
    else{
    
        printf(". \n");
    }
    return c;
}
        
char my_get(char c){
    char a = fgetc(stdin);
    return a;
}

char* map(char *array, int array_length, char (*f) (char)){
  char* mapped_array = (char*)(malloc(array_length*sizeof(char)));
  for(int i = 0;i < array_length ; i++){
      *(mapped_array + i) = f(*(array + i));
  }
  return mapped_array;
}

char quit(char c){
    exit(c);
}


int main(int argc, char** argv){
    int inbounds = 1;
    char carray[5] = {0,0,0,0,0};
    char c;
    
    struct func_desc menu[] = {{"Censor", censor},{"Encrypt", encrypt},{"Decrypt", decrypt},{"Print hex", xprt},{"Print string", cprt},{"Get string", my_get},{"Quit", quit},{NULL,NULL}};
    while(inbounds){
        char* s;
        printf("Please choose a function: \n");
        for(int i = 0; i < 7 ; i++){
            printf("%d) %s \n",i,menu[i].name);
        }
        printf("Option: ");
    
        c = fgetc(stdin);
        fgetc(stdin);
        if( c >= '0' && c <= '6'){
            printf("Within bounds \n");
            s = map(carray, 5 ,menu[c - '0'].fun);
            
            for(int i = 0;i < 5;i++){
                carray[i] = *(s + i);
            }
            free(s);
            printf("%c",carray[0]);
            printf("DONE. \n \n");
        }
        else{
            printf("Not within bounds \n");
            inbounds = 0;
        }
        
    }
    
}