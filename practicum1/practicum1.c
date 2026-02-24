#include <stdio.h>
#include <stdlib.h>
#define Size 5

struct position {
    float x;
    float y;
    float z;
};

int main(){
    struct position pos[Size] ;
    for (int i = 0; i < Size; i++) {
        pos[i].x =((float)rand() / RAND_MAX) * 10; // positie van x en y en z tussen 0 en 10
        pos[i].y =((float)rand() / RAND_MAX) * 10;
        pos[i].z =((float)rand() / RAND_MAX) * 10;
        printf("pos[%d]: (%.2f, %.2f, %.2f)\n", i, pos[i].x, pos[i].y, pos[i].z);
    }
    return 0;
}