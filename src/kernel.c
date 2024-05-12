#include "./uart/uart0.h"
#include "./mbox/mbox.h"
#include "./framebf/framebf.h"

void main() {
    // set up serial console
    uart0_init();
    // say hello
    uart0_puts("\n\nHello World!\n");
    framebf_init();
    while (1) {
        uart0_puts("loop!\n");
    }
}
