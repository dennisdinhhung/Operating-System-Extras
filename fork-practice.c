#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid = fork();

    if (pid == 0)
    {
        printf("This is the child process.\nStart ps -ef \n");

        char *args[]={"/bin/ps", "-ef", NULL};

        execvp ("/bin/ps", args);

    }

}