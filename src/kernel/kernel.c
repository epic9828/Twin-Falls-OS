/*
kernel for tfOS, it is a monolithic kernel
will support a gui, and user acces to File sys 
mabye networking?
*/
//#include "kernel/drivers/fs/fs.h"
//#include "src/kernel/drivers/sys.h"
//#include "src/kernel/drivers/keyboard/keyboard.h"
#include "drivers/vid/screen.h"
//blank entry point
void kernel_entry(){

}

void main()
{
  *vga_txt = 'X';
}