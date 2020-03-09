
#include<stdio.h>
int main() {
    int i,word =0;
    char name[] = "Johirul Alam soikat";
    for(i = 0; name[i]!='\0'; i++) {
            if(word == 0){
                word = 1;
            }
        if(name[i]==32 && name[i-1]!=32){

            word++;
        }

    }
    printf("%d",word);
}
