#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct user{
    char *name;
    float data;
};

int compar(const void* first,  const void* second){
    const struct user *fag1 = first;
    const struct user *fag2 = second;

    if(fag1->data>fag2->data){
        return -1;
    }
    else if(fag1->data<fag2->data){
        return 1;
    }
    return 0;

}

int main(void){
    struct user users[5] = {
        {.name="John", .data=0.5},
        {.name="Sanji", .data=2.5},
        {.name="Samir", .data=1.0},
        {.name="Letif", .data=3.5},
        {.name="User3", .data=2.35},
    };
    qsort(users,sizeof(users)/sizeof(struct user),sizeof(struct user), compar);
    for(int i = 0; i<5;i++){
        printf("%s\t%.1f\n", (users+i)->name,(*(users+i)).data);

    }
    return 0;
}