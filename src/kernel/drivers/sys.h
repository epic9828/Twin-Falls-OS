

//global variables
struct pos{
  int x;
  int y;
  int z;
};
/*
*sys.h for kernel.c
*
*
*/




#define true 1
#define false 0


char* vga_md = 0x0f;
char* vga_mem =  0x0000A000;
char* vga_txt = (char*) 0xb8000; 


//prints text using vid mem
char print(char s[]){
  //reads string length and then prints output
  for(int i = 0; s[i] != "/0"; i++){
    *vga_txt = s[i];
  }
}

//string contencater
char cat(char s[], char s1[]){
    for(int i =0; s[i] != "/0"; i++){
      s[i] = s1[i];
    }
    return s;
}

//exits, what did you think would happen?
void exit(){
  return 1;
}
