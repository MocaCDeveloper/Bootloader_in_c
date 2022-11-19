#include "moc_protocol.h"

void __attribute__((section("__start"))) main()
{
    // Make sure no data is stored in regs.
    //reset_reg_state();

    //reg_info.regs.al = 'a';
    //reg_info.regs.ah = 0x0E;
    //reg_info.interrupt = 0x10;
    
    //try(run_interrupt(reg_info));

    //static UNS8 *vid_mem = (UNS8 *)0xB8000;

    __asm__("mov al, 'a'\nmov [0xB8000], al");
    //bios_vid_mem_write('a')
    //bios_vid_mem_write_str("Hello, World");
}