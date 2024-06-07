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



    fclose(in_file);
    fclose(out_file);
}

int decode_hafman(const char *in_file_name, const char *out_file_name) 
{
    FILE *in_file = fopen(in_file_name, "r");
    FILE *out_file = fopen(out_file_name, "w");

    if (!in_file || !out_file) 
    {
        fprintf(stderr, "Error opening file\n");
        exit (1);
    }
    char buf[text];
    fgets(buf, text, in_file);
    char* letters;
    letters = malloc(sizeof(char)*text);
    int * counts;
    counts = malloc(sizeof(char) * text);
    size_t count=0;
    for (size_t i = 0; i < text;i++)
    {
        if (check_letter(letters,counts,count,buf[i]))
        {
            letters[count] = buf[i];
            counts[count] = 1;
            count++;
        } 
    }
    fclose(in_file);
    fclose(out_file);
}

_Bool check_letter(char* letters, int* count,int counter,char let){
    for (size_t i = 0; i < counter; i++)
    {
        if (let=letters[counter])
        {
            count[counter]++;
            return false;
        }
    }
    return true;
}

//FILE *mf;
//mf = fopen("hafman.txt", "w");
//fprintf (mf,"ddaas");
