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

    int pid2=fork();

    if (pid==0)
    {
        printf("This is the child process.\nStart free -h \n");

        char *args[]={"/bin/free", "-h", NULL};

        execvp ("/bin/free", args);
    }
}