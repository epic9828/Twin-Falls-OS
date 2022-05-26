
#define blu 0x1f


const char* mem_vga[] = {0xb8000,0xb80001, 0xb8002,0xb8003,0xb8004,0xb80005, 0xb8006,0xb8007};
char* vga_txt = (char*) 0xb0000; 
const char* newline = (char*) 0x0a;


char print(char s[]){
  //reads string length and then prints output
  for(int i = 0; s[i] != "\0"; i++){
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