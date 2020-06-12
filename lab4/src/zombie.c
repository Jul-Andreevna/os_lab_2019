#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main() {

 pid_t child_pid;

 child_pid = fork();

 if (child_pid > 0) { //усыпляем родительский процесс

  sleep(60);

 } else if (child_pid ==0) {
  
  exit(0);

 }

 return 0;

}