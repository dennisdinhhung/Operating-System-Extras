#include <stdio.h>
#include <unistd.h>

int main()
{
    printf ("Main before fork() \n");
    int pid = fork();
    if (pid==0)
    {
        printf("i am child after fork(), launching ps -ef \n");
        char *args[]= {"/bin/ps","-ef",NULL};
        execvp("/bin/ps", args);
        printf("\nFinished launching ps -ef\n");
    }

    else printf("me am parent after fork(), child is %d\n", pid);
    return 0;
}