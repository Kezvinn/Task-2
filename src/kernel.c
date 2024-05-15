#include "./uart/uart0.h"
#include "./mbox/mbox.h"
#include "./framebf/framebf.h"
#include "./irq/irq.h"

void main() {
    // set up serial console
    uart0_init();
    uart0_puts("\nHello World!\n");
    
    enable_irq();
    handle_irq();
    // say hello
    framebf_init();
    while (1) {
        char c  = uart0_getc();
        uart0_sendc(c);
    }
}
