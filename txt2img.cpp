#include "bmp.h"

int
main(int argc,char** argv){
  FILE* in=fopen(argv[3] ,"rb");
  BMP   out(atoi(argv[1]),atoi(argv[2]));
  bmp_for(out){
    int rgb[3];
    if(fscanf(in,"%03x%03x%03x",rgb,rgb+1,rgb+2)!=3)
      break;
    for(int k=0;k<3;k++)
      out(x,y,k)=rgb[k];
  }
  fclose(in);
  out.write(argv[4]);
  return 0;
}
