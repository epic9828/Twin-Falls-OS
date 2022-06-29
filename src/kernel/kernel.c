/*
kernel for tfOS, it is a monolithic kernel
will support a gui, and user acces to File sys 
mabye networking?
<<<<<<< HEAD
*/ 
#include "src/kernel/drivers/sys.h"
#include "src/kernel/drivers/vid/screen.h"
=======
*/
//#include "kernel/drivers/fs/fs.h"
//#include "src/kernel/drivers/sys.h"
//#include "src/kernel/drivers/keyboard/keyboard.h"
#include "drivers/vid/screen.h"
>>>>>>> 1c079be0c57058fbe5a745757a5da72bfd4308ba
//blank entry point
void kernel_entry(){

}

void main()
{
  *vga_txt = 'X';
}