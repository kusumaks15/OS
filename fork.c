#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
        char* cmnd="ls";
        char* argument[]={"ls","-l",NULL};
        printf("Before execvp()\n");
        pid_t p=fork();
        if(p==0)
{
   printf("Child Process\n");
   int status=execvp(cmnd,argument);
   if(status==-1)
   {
           printf("Terminated\n");
   }
}
else
{
        printf("Parent Process\n");
        printf("Done\n");
}
}
