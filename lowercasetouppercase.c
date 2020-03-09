
#include<stdio.h>
int main() {
    int i;
    char name[20] = "johir raihan";
    for(i = 0; name[i]!='\0'; i++) {
        if(name[i]!=30){

            name[i] = name[i]-32;
        }

    }
    printf("%s",name);
}
