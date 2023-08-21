#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main (int argc, char *argv[])
{

    for (int i = 0; i < 10; i++)
    {
        int pid_f = fork();
        if (pid_f == 0){    
            while(1){continue;}
            exit();
        }
    }
    int* make_different_mem    = malloc(sizeof(int)*10);
    cps();
    free(make_different_mem);
    exit();
}