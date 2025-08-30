#include <stdio.h>
#include <stdlib.h>

int main() {
    int inChoice, outChoice;

    while (1) {

        printf("\n===== Number System Converter =====\n");
        printf("Select input base:\n");
        printf("1. Decimal\n");
        printf("2. Binary\n");
        printf("3. Octal\n");
        printf("4. Hexadecimal\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &inChoice);

        if (inChoice == 5) {
            printf("Exiting...\n");
            exit(0);
        }

        printf("\nSelect output base:\n");
        printf("1. Decimal\n");
        printf("2. Binary\n");
        printf("3. Octal\n");
        printf("4. Hexadecimal\n");
        printf("Enter choice: ");
        scanf("%d", &outChoice);

        if (inChoice == outChoice) {
            printf("Input base and output base are the same. No conversion needed!\n");
            continue;
        }
        

        if (inChoice == 1) { 
            int num;
            printf("Enter a decimal number: ");
            scanf("%d", &num);

            if (outChoice == 2) {
                if (num == 0) {
                    printf("Binary = 0\n");
                } else {
                    int binary[32], i = 0;
                    while (num > 0) {
                        binary[i] = num % 2;
                        num /= 2;
                        i++;
                    }
                    printf("Binary = ");
                    for (int j = i - 1; j >= 0; j--) {
                        printf("%d", binary[j]);
                    }
                    printf("\n");
                }
            }
            else if (outChoice == 3) {
                printf("Octal = %o\n", num);
            }
            else if (outChoice == 4) {
                printf("Hexadecimal = %X\n", num);
            }
        }

            
        else if (inChoice == 2) {  
            char binaryStr[65];
            printf("Enter a binary number: ");
            scanf("%s", binaryStr);
            long decimal = strtol(binaryStr, NULL, 2);

            if (outChoice == 1) {
                printf("Decimal = %ld\n", decimal);
            }
            else if (outChoice == 3) {
                printf("Octal = %lo\n", decimal);
            }
            else if (outChoice == 4) {
                printf("Hexadecimal = %lX\n", decimal);
            }
        }

            
        else if(inChoice == 3){
            char octalStr[65];
            printf("Enter a octal number: ");
            scanf("%s", octalStr);
            long decimal = strtol(octalStr,NULL,8);
            if(outChoice == 1){
                printf("decimal = %ld\n",decimal);
                }
            else if (outChoice == 2){
                if (decimal == 0){
                    printf("binary = 0\n");
                }else{
                int binary[65],i=0;
                while(decimal>0){
                    binary[i] = decimal %2;
                    decimal /= 2;
                    i++;
                }
                printf("binary = ");
                for (int j = i-1;j>=0;j--){
                printf("%d", binary[j]);
                }
            }printf("\n");
            }
            else if (outChoice == 4){
                printf("hexadecimal = %lX\n",decimal);
            }
            }

    
        else if (inChoice == 4){
            char hexStr[65];
            printf("enter a hexadecimal number:");
            scanf("%s", hexStr);
            long decimal = strtol(hexStr,NULL,16);
            
            if(outChoice == 1){
                printf("decimal = %ld\n", decimal);
            }
                
            else if (outChoice == 2){
                if(decimal == 0){
                    printf("binary = 0\n");
                }else{
                int binary[65],i=0;
                while(decimal>0){
                    binary[i]= decimal%2;
                    decimal /= 2;
                    i++;
                }
                printf("binary = ");
                for(int j =i-1;j>=0;j--){
                    printf("%d",binary[j]);
                }printf("\n");
                }
            }
            else if (outChoice == 3){
                printf("octal = %lo\n",decimal);
            }
        }
    }
    printf("\n\n\n");
    return 0;
}
