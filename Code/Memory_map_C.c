#include <stdio.h>
#include <Stdlib.h>


/* 
 High address    _________________________________      _
                |                                 |      |
                |                                 |      |-- Command line arguments & environment
                |                                 |     _|   variables
                |_________________________________|
                |                                 |
                |               Stack             |<----------------0xbffff9e4
                |                                 |
                |---------------------------------|
                |_________________________________|
                |                                 |<----------------0x4017a6a0 }
                |         shared memory           |                            }--shared memory of 100,000 bytes
                |_________________________________|<----------------0x40162000 }
                |                                 |
                |---------------------------------|
                |                                 |
                |               Heap              |<----------------0x0806c368 }
                |                                 |                            }malloc of 100,000 bytes
                |_________________________________|<----------------0x08053cc8 }
                |                                 |
                |       uninitialized data        |<----------------0x08053cc0 }
                |           (bss)                 |                            }arrya [] of 40,000 bytes
                |_________________________________|<----------------0x0804a080 }
                |                                 |
                |          initialized data       |
                |                                 |
                |_________________________________|
                |                                 |
                |           text                  |
                |                                 |                
Low address     |_________________________________|




*/


int global = 0;
int globaluninitialized;

int main(void){
    int local =0;
    int *dynamicmemoryallocation = NULL;
    dynamicmemoryallocation = malloc(20*sizeof(int));

    global =1 ;
    globaluninitialized = 2;
    local = global + globaluninitialized;
    printf("Printing the result = %d",local);
    return 0;
}