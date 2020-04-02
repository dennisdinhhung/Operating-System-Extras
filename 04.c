#include <stdio.h>
#include <unistd.h>

int main()
{
    printf ("This is a ps -ef test\n");
    char *args[]={"/bin/ps","-ef",NULL};
    execvp("/bin/ps", args);
    return 0;
}
