#include <stdio.h>
#include <string.h>

int main()
{
    char sen[100];
    char rsen[100];
    int len, i, index;
    int wstart, wend;

    printf("Enter Your String: ");
    gets(sen);

    len   = strlen(sen);
    index = 0;

    //checking of words from the end of string

    wstart = len - 1;
    wend   = len - 1;

    while(wstart > 0)
    {

        if(sen[wstart] == ' ')
        {
            // Add to the reverse string
            i = wstart + 1;
            while(i <= wend)
            {
                rsen[index] = sen[i];

                i++;
                index++;
            }
            rsen[index++] = ' ';

            wend = wstart - 1;
        }

        wstart--;
    }

    // add the last word

    for(i=0; i<=wend; i++)
    {
        rsen[index] = sen[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    rsen[index] = '\0';

    printf("\nReverse Your String: %s", rsen);
    printf("\n");
    return 0;
}
