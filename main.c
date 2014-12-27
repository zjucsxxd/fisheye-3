#include <stdio.h>
#include <stdlib.h>
#include "headers/bmp.h"
#include "headers/process.h"

const char *inputFiles[4] = {"imgs/a.bmp", "imgs/b.bmp", "imgs/c.bmp", "imgs/d.bmp"};
const char *outputFiles[4] = {"imgs/a_out.bmp", "imgs/b_out.bmp", "imgs/c_out.bmp", "imgs/d_out.bmp"};

int main(void)
{
    ClImage *srcImages[4];
    int i;

    for (i = 0; i < 4; ++i)
    {
	srcImages[i] = clLoadImage(inputFiles[i]);
	processImage(srcImages[i], outputFiles[i], i);
    }

    return 0;
}
