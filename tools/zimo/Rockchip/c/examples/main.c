#include <stdlib.h>     //exit()
#include <signal.h>     //signal()
#include "test.h"
#include <string.h>

void  Handler(int signo)
{
    //System Exit
    printf("\r\nHandler:exit\r\n");
    DEV_ModuleExit();

    exit(0);
}

int main(int argc, char *argv[])
{
    // Exception handling:ctrl + c
    signal(SIGINT, Handler);

    if (argc != 2){
        printf("please input OLED size and type! \r\n");
        printf("example: sudo ./main 1.3 or sudo ./main 1.3c \r\n");
        printf("If rgb: sudo ./main 1.5rgb \r\n");
        exit(1);
    }

	printf("%s OLED Moudule\r\n", argv[1]);

    if(strcmp(argv[1], "1.5") == 0)
      OLED_1in5_test();
    else
      printf("error: can not find the OLED\r\n");

    return 0;
}
