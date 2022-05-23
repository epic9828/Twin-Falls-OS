//global variables
struct pos{
  int x;
  int y;
  int z;
};
char* vid_mem  = (char*) 0xb8000;
#define true 1
#define false 0
int inet;



//prints text using vid mem
char print(char s[]){
  //reads string length and then prints output
  for(int i = 0; s[i] != "/0"; i++){
    //TODO: print to screen using vid mem
    *vid_mem = s[i];
  }
}

//string contencater
char cat(char s[], char s1[]){
    for(int i =0; s[i] != "/0"; i++){

    }
}