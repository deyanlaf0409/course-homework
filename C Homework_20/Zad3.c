#include <signal.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

volatile sig_atomic_t print_flag = false;

void handle_alarm( int sig ) {
    print_flag = true;
}

int main() {
	int i;
    signal( SIGALRM, handle_alarm ); // Install handler first,
    alarm( 1 ); // before scheduling it to be called.
    
    do{
    for (i=1;i<=60;i++) {
        sleep( 5 ); // Pretend to do something. Could also be read() or select().
        if ( print_flag ) {
            printf( "%d\n",i);
            print_flag = false;
            alarm( 1 ); // Reschedule.
            if(i==60)
            {
                printf("MINUTE!!!");
            }
        }
    }
    }while(1);
}
