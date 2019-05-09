#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    
float image[5][5][3];
int x, y,i;
float sum=0.0, mean;

// Don’t change this srand() line!
srand(0);
for(y = 0; y < 5; y++) {
for(x = 0; x < 5; x++) {
image[x][y][0] = (float)rand()/(float)INT_MAX;
image[x][y][1] = (float)rand()/(float)INT_MAX;
image[x][y][2] = (float)rand()/(float)INT_MAX;
}
}
//Prints RGB values
printf("RGB values\n");
    for(y=0;y<5;y++){
        for(x=0; x<2; x++){
             printf("%d %d:", x,y);
            for(i=0;i<3;i++){
                printf("%f ",image[x][y][i]);
            }
            printf("\n");
        }
        
    }
//Averages RGB and prints ie. converts to grey scale
printf("\nGrey Scale values\n");
    for(y=0;y<5;y++){
        for(x=0; x<2; x++){
             printf("%d %d:", x,y);
            for(i=0;i<3;i++){
                sum = sum + image[x][y][i];
                mean = sum/3;
                mean = image[x][y][i];
                printf("%f ",image[x][y][i]);
            }
            printf("\n");
        }
        
    }
    
return 0;
}
