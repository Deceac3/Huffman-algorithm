#include "hafman.h"
int encode_hafman(const char *in_file_name, const char *out_file_name) 
{
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
    letters = malloc(sizeof(char)*5);
    int * counts;
    counts = malloc(sizeof(int)*5);
    char symbols[5][100];
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
    struct points points[5];
    int sum = 0;
    for (size_t i = 0; i <= count; i++)
    {
        points[i].leter = letters[i];
        printf("%s\n",points[i]);
    }
    while (sum<text)
    {
        int min1 = text;
        int min2 = text;
        int minc1 = 0;
        int minc2 = 0;
        for (size_t i = 0; i <= count; i++)
        {
            if(counts[i] < min1){
                minc1 = i;
            }
        }
        for (size_t i = 0; i <= count; i++)
        {
            if ((counts[i]<min2)&&(i!=minc1))
            {
                minc2 = i;
            }
        }
        sum += counts[minc1] + counts[minc2];
        counts[minc1] += counts[minc2];
        counts[minc2] = text;
        for (size_t i = 0; i <= count; i++)
        {
            for (size_t j = 0; i <= count; i++)
            {
                if (points[minc1].leter==letters[j])
                {
                    *symbols[j] = strcat("0", symbols[j]);
                }
            } 
        }
        for (size_t i = 0; i < count; i++)
        {
            for (size_t j = 0; i < count; i++)
            {
                if (points[minc2].leter==letters[j])
                {
                    *symbols[j] = strcat("1", symbols[j]);
                }
            } 
        }
        points[minc1].leter = strcat(points[minc1].leter, points[minc2].leter);
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("%s\n", symbols[i]);
    }
    
    fclose(in_file);
    fclose(out_file);
    return 0;
}

_Bool check_letter(char* letters, int* count,int counter,char let){
    for (size_t i = 0; i < counter; i++)
    {
        if (let==letters[i])
        {
            count[i]++;
            return false;
        }
    }
    return true;
}

//FILE *mf;
//mf = fopen("hafman.txt", "w");
//fprintf (mf,"ddaas");
