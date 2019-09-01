#include <stdio.h>
#include "avilib.h"

int main(int argc, char *argv[])
{
    avi_t *avi = AVI_open_output_file("./test.avi");
    AVI_set_video(avi,320,240,15,"H264");
    FILE *fd_264 = fopen("test.h264","rb");
    FILE *fd_txt = fopen("test.txt","rb");
    do {
        char buf[16] = {0};
        fgets(buf,16,fd_txt);
        int size = atoi(buf);
        if (size == 0)
            break;
        char *p_h264 = (char *)malloc(size); 
        fread(p_h264,1,size,fd_264);
        if (size > 2000)
            AVI_write_frame(avi,p_h264,size,1);
        else
            AVI_write_frame(avi,p_h264,size,0);
    } while (1);
    fclose(fd_264);
    fclose(fd_txt);
    AVI_close(avi);

    return 0;
}
