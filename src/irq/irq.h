#ifndef IRQ_H
#define IRQ_H

#define IRQ_BASE (MMIO_BASE + 0x7E00B000)

// registers
#define IRQ_BASIC_PENDING   (*(volatile unsigned int *)(IRQ_BASE + 0x200))

// 31:0 IRQ pending source  from GPU side
#define IRQ_PENDING_1       (*(volatile unsigned int *)(IRQ_BASE + 0x204))
// 63:32 IRQ pending source from GPU side
#define IRQ_PENDING_2       (*(volatile unsigned int *)(IRQ_BASE + 0x208))

#define FIQ_CONTROL         (*(volatile unsigned int *)(IRQ_BASE + 0x20C))

#define ENABLE_IRQS_1       (*(volatile unsigned int *)(IRQ_BASE + 0x210))
#define ENABLE_IRQS_2       (*(volatile unsigned int *)(IRQ_BASE + 0x214))
#define ENABLE_BASIC_IRQS   (*(volatile unsigned int *)(IRQ_BASE + 0x218))

#define DISABLE_IRQS_1      (*(volatile unsigned int *)(IRQ_BASE + 0x21C))
#define DISABLE_IRQS_2      (*(volatile unsigned int *)(IRQ_BASE + 0x220))
#define DISABLE_BASIC_IRQS  (*(volatile unsigned int *)(IRQ_BASE + 0x224))

// FIQ source
// 0-63: GPU interrupts
// 72-127: Do not use 
#define FIQ_ARM_TIMER 64
#define FIQ_ARM_MAILBOX 65
#define FIQ_ARM_DOORBELL_0 66
#define FIQ_ARM_DOORBELL_1 67
#define FIQ_GPU_0_HALT 68
#define FIQ_GPU_1_HALT 69
#define FIQ_ILLEGAL_ACCESS_TYPE_1 70
#define FIQ_ILLEGAL_ACCESS_TYPE_0 71

// ARM peripherals interrupt
#define SYS_TIMER_MATCH_1_INT 1
#define SYS_TIMER_MATCH_3_INT 3
#define USB_CONTROLLER_INT 9
#define AUX_INT 29
#define I2C_SPI_SLV_INT 43
#define PWA0_INT 45
#define PWA1_INT 46
#define SMI_INT 48
#define GPIO_INT_0 49
#define GPIO_INT_1 50
#define GPIO_INT_2 51
#define GPIO_INT_3 52
#define I2C_INT 53
#define SPI_INT 54
#define PCM_INT 55
#define UART_INT 57

#endif // IRQ_H