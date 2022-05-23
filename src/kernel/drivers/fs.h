const char *f_name = "tffs";
char* vid_mem  = (char*) 0xb8000;




//prints text using vid mem
char print(char s[]){
  //reads string length and then prints output
  for(int i = 0; s[i] != "/0"; i++){
    //TODO: print to screen using vid mem
    *vid_mem = s[i];
  }
}