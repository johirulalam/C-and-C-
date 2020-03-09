
#include<stdio.h>
int main() {
    int i,word =0;
    char name[] = "Johirul Alam soikat";
    for(i = 0; name[i]!='\0'; i++) {
        
        /* the name variable could be null so we have to declare word=0 not word=1 after checking not null then we call word=1   */
            if(word == 0){
                word = 1;
            }
        /* it could be white space that means it counts every  space so we have to check that previous one is not space  */ 
        if(name[i]==32 && name[i-1]!=32){

            word++;
        }

    }
    printf("%d",word);
}
