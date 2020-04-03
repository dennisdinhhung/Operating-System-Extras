#include <unistd.h>
#include <stdio.h>

int main()
{
    printf ("Main before fork()\n");
    int pid = fork();
    
    if (pid == 0)
    {
        printf ("I am child after fork()\n");
    }

    else printf ("i am parent after fork(), child is %d", pid);

    return 0;
}
