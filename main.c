#include "scr/hafman.c"

int main(int argc, char *argv[]){
    if (argc < 4) 
    {
        printf("Usage:\n");
        printf("hafman -c <in-file-name> <out-file-name>\n");
        printf("hafman -d <in-file-name> <out-file-name>\n");
        return 1;
    }
    if (argc == 4 && strcmp(argv[1], "-c") == 0) 
    {
        return encode_hafman(argv[2], argv[3]);
    } 
    else if (argc == 4 && strcmp(argv[1], "-d") == 0) 
    {
        return decode_hafman(argv[2], argv[3]);
    } 
    else 
    {
        printf("Unknown command: %s\n", argv[1]);
        printf("Usage:\n");
        printf("hafman -c <in-file-name> <out-file-name>\n");
        printf("hafman -d <in-file-name> <out-file-name>\n");
        return 1;
    }
    return 0;
}
