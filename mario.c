#include <stdio.h>

int main(){
    int height;
    int result;

    do{
        printf("Height: ");
        result = scanf("%d", &height);

        if(result != 1){
            while(getchar() != '\n');
        }
    } while (result != 1 || height < 1 || height > 8);

    for (int row = 0; row < height; row++){
        for(int space = 0; space < height - row - 1; space++){
            printf(" ");
        }
        for (int col = 0; col <= row; col++){
            printf("#");
        }
        // MARIO-MORE
        printf("  ");
        for(int col = 0; col <= row; col++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}