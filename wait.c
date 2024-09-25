#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
       char* cmnd="ls";
       char* argument[]={"ls","-l",NULL};
       printf("Before execvp()\n");
       pid_t p=fork();
       if(p==0)
       {
              printf("Child Process\n");
              int status=execvp(
