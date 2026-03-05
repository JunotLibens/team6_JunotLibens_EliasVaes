#include <stdio.h>
#include <stdlib.h>
#define Size 5

struct position {
    float x;
    float y;
    float z;
};

int main(){
    struct position data[Size] ;
    for (int i = 0; i < Size; i++) {
        data[i].x = rand() %5; // positie van x en y en z tussen 0 en 10
        data[i].y = rand() %5;
        data[i].z = rand() %5;
    }

    int indices[Size];
    for (int i = 0; i < Size; i++) {
        indices[i] = i;
    }
    
    printf("position Data:\n");
    for (int i = 0; i < Size; i++) {
        int ind = indices[i]; 
        printf("%d : x:%.2f, y:%.2f, z:%.2f\n",
               ind,
               data[ind].x,  
               data[ind].y,
               data[ind].z);
    }

    return 0;
}