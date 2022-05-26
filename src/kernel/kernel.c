/*
kernel for tfOS, it is a monolithic kernel
will support a gui, and user acces to File sys 
mabye networking?
*/
#include "kernel/drivers/fs/fs.h"
#include "kernel/drivers/sys.h"
#include "kernel/drivers/keyboard/keyboard.h"

//blank entry point
void entry(){

}




//init, all the good stuff
int kinit()
{
  while(1){
    print("system kernel");
    print("starting bash, initizing gui");

  }
  return 0;
}