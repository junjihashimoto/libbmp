#include "bmp.h"

int
main(int argc,char** argv){
  BMP in(argv[2]);
  FILE* out=fopen(argv[3] ,"wb");
  bmp_for(in){
    fprintf(out,
	    "%03x%03x%03x\n",
	    in(x,y,0)*4,
	    in(x,y,1)*4,
	    in(x,y,2)*4);
  }
  fclose(out);
  return 0;
}
