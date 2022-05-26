
#define blu 0x1f


char* mem_vga[] = {0xb8000,0xb80001, 0xb8002,0xb8003,0xb8004,0xb8005, 0xb8006,0xb8007,0xb8008,0xb8009, 0xb80010,0xb80011,0xb8012,0xb8013, 0xb8014,0xb8015};
char* vga_txt = (char*) 0xb0000; 
const char* newline = (char*) 0x0a;


char print(char s[]){
  //reads string length and then prints output to vid mem
  for(int i = 0; s[i] != "\0"; i++){
    if(i == 14){
      break;
    }
    else{
      *mem_vga[i] = s[i];
    }
  }
}

//string contencater
char cat(char s[], char s1[]){
    for(int i =0; s[i] != "/0"; i++){
      s[i] = s1[i];
    }
    return s;
}