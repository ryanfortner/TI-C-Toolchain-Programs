#include <ti/screen.h>
#include <ti/getkey.h>
#include <stdio.h>

int main(void) {
    os_PutStrFull("Waiting for you to click the enter key...");

    uint16_t key;

    while(true) {
        if ((key = os_GetKey()) == k_Enter) break;
    }

    return 0;
}