#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Dip Vaghasiya\n");
    printf("210210116003\n\n");
    FILE *fp;
    printf("Output from file : \n");
    fp = fopen("P_11_1.txt", "r");
    // BY USING "fgets" FUNCTION, WE CAN READ THE FILE LINE BY LINE.
    // char buffer[100];
    // fgets(buffer, 100, fp);
    // printf("%s", buffer);

    // BY USING "fgetc" FUNCTION, WE CAN READ THE FILE CHAR BY CHAR.
    while(!feof(fp)){
        printf("%c", fgetc(fp));
    }
    fclose(fp);
    return 0;
}
