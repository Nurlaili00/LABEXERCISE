#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int  main(void) {
   pid_t pid = fork();
   int kira = 0;

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


