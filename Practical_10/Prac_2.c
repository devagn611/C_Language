#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Dip Vaghasiya\n");
    printf("210210116003\n\n");
    FILE *fp;
    fp = fopen("DATA.txt", "w");
    int m[10] = {0};
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &m[i]);
    }
    for(int i = 0; i < 10; i++){
        fprintf(fp, "%d ", m[i]); // THIS IS HOW WE CAN PRINT DATA TO FILE, OR CAN USE fputs() TO PRINT DATA TO FILE
    }
    fclose(fp);
    
    fp = fopen("DATA.txt", "r");
    int result[10];
    for(int i = 0; i < 10; i++){
        fscanf(fp, "%d", &result[i]); // THIS IS HOW WE CAN READ DATA FROM FILE, OR CAN USE fgets() TO READ DATA FROM FILE
        printf("The marks of %d student is %d\n", i + 1, result[i]);
    }
    fclose(fp);
    return 0;
}
