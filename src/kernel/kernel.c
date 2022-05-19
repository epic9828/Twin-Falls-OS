/*
#include "drivers/fs.h"
#include "drivers/sys.h"
#include "drivers/screen.h"
#include "drivers/keyboard.h"
kernel for tfOS, it is a monolithic kernel
will support a gui, and user acces to File sys 
mabye networking?
*/

#define true 1
#define false 0

//infinite loop for computer, unless shutdown
void entry(){

}

//runs all important stuff
int main(){
    char* vid_mem  = (char*) 0xb8000;
    *vid_mem = 'X';

}