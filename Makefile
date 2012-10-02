PROGRAMS=img2txt txt2img
all:$(PROGRAMS)
img2txt:img2txt.cpp bmp.h rgb.h
	g++ $< -o $@ -g -ljpeg -lpng -lz -I.

txt2img:txt2img.cpp bmp.h rgb.h
	g++ $< -o $@ -g -ljpeg -lpng -lz -I.

clean:
	rm -rf $(PROGRAMS) *.o
