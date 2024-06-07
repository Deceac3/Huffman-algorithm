#include <hafman.h>
int encode_hafman(const char *in_file_name, const char *out_file_name) 
{
    FILE *in_file = fopen(in_file_name, "r");
    FILE *out_file = fopen(out_file_name, "wb");
    if (!in_file || !out_file) 
    {
        fprintf(stderr, "Error opening file\n");
        return -1;
    }
}

int decode_hafman(const char *in_file_name, const char *out_file_name) 
{
    FILE *in_file = fopen(in_file_name, "rb");
    FILE *out_file = fopen(out_file_name, "w");

    if (!in_file || !out_file) 
    {
        fprintf(stderr, "Error opening file\n");
        return -1;
    }
}
