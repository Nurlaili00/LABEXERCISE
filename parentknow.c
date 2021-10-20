#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int  main(void) {
   int pipefds[2];
   if(pipe(pipefds) == -1) {
   perror("pipe);
   exit(EXIT_FAILURE);
}
   int kira = 0;
   pid_t pid = fork();
}

  if(pid == 0) {
    printf("Child => PPID: %d PID: %d\n", getppid(), getpid());
    printf("Jumlah sebelum saya tambah: %d \n", kira);
    kira = kira + 5;
    printf("Jumlah selepas saya tambah: %d \n", kira);
    exit(EXIT_SUCCESS);
}
    else if(pid > 0) {
     printf("Parent => PID: %d\n", getpid());
     printf("Waiting for child process to finish.\n");
     wait(NULL);
     printf("Child process finished.\n");
     printf("Jumlah parent selepas anak saya tambah: %d \n", kira);
}
    else {
     printf("Unable to create child process.\n");
}
  return EXIT_SUCCESS;
}
