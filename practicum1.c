#define Size 5
#include <stdio.h>

struct position {
    float x;
    float y;
    float z;
};

int main(){
    struct position pos[Size];
    for (int i = 0; i < Size, i++){
        pos[i].x =rand() % 10; // positie van x en y en z tussen 0 en 9
        pos[i].y =rand() % 10;
        pos[i].z =rand() % 10;
        printf("pos[%d]: (%.0f, %.0f, %.0f)\n", i, pos[i].x, pos[i].y, pos[i].z);
    }
}