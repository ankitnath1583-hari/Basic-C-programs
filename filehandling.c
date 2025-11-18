#include <stdio.h>

int main() {
    FILE *ptr;
    char sentence[50]; 
     ptr=fopen("filehandling.txt", "r");
if (NULL) {
printf("this file is not present!");} 
while(fgets(sentence, sizeof(sentence), ptr)  ){
        printf("%s", sentence);}
    fclose(ptr);

    return 0; 
}
