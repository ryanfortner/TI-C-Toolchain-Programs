#include <ti/screen.h>
#include <ti/getcsc.h>

int main(void) {
    os_ClrHome();

    os_PutStrFull("Hello World");

    while(!os_GetCSC());

    return 0;
}