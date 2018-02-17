#include <stdio.h>
int Encrypt(char * FILENAME, char * NEW_FILENAME)
{
    FILE *inFile;   //Declare inFile
    FILE *outFile;  //Declare outFile
    char Byte;
    char newByte;
    int n;
    int i=0;

    inFile = fopen(FILENAME,"rb");
    outFile = fopen(NEW_FILENAME, "w");

    if(inFile == NULL || outFile == NULL){
        printf("Error in opening file");
            return 1;
    } else {
        printf("\nFile Opened, Encrypting");
        while(1){
                while ( !feof( inFile ) ){
                    Byte=fgetc(inFile);
                    newByte=Byte+25;
                    fputc(newByte,outFile);
                }
            printf("End of File");
            break;
        }
        fclose(inFile);
        fclose(outFile);
    }
}