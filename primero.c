
/* NOTAS
pid_t = int GNU C es la variable que contiene el proceso id
getpid() = Obtiene el ID del proceso actual
getppid() = Obtiene el ID del padre del proceso actual

fork()

  Si sale bien 
                 El proceso padre: Nos va a regresar el proceso del hijo.
                 El hijo nos va a regresar un 0

  Si Falla:
                El proceso padre me regresa un -1
                El hijo no se crea.
*/
#include<unistd.h>
#include<stdio.h>
int main(void)
{
pid_t procid;
printf("My current process id is %d \n",getpid());
procid = fork();
printf("Fork ID %d \n", procid);
printf("Calling fork %d \n", getpid());


return 0;
}
			
