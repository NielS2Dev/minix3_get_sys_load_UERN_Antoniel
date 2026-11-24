#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Erro ao criar processo (fork)");
        return EXIT_FAILURE;
    }

    if (pid == 0) {
        /* Processo filho */
        printf("Filho: PID = %d, PPID = %d\n", getpid(), getppid());
        _exit(EXIT_SUCCESS);
    } else {
        /* Processo pai */
        int status;
        printf("Pai: PID = %d, criou filho PID = %d\n", getpid(), pid);
        wait(&status);
        printf("Pai: processo filho finalizou.\n");
    }

    return EXIT_SUCCESS;
}
