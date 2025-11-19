#include <stdio.h>
#include<string.h>
struct student{
    int id;
   int class
    ;

};

int main(){
    struct student s1;
    s1.id=973693;
    s1.class=12;
   

    struct student *p;
    p=&s1;
     printf("ID: %d\n", p->id);
      printf("class: %d\n", p->class);

}

    

