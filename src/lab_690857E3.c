
void copy(char *psource, char *ptarget, unsigned num_char)
{
    while (num_char > 0 && *psource != '\0')
    {
        *ptarget = *psource;
        ptarget++;
        psource++;
        num_char--;
    }
    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    if (buffer_size == 0)
    {
        return;
    }

    /* reserve one byte for the terminating '\0' */
    copy(psrc1, ptarget, buffer_size - 1);

    unsigned len1 = (unsigned)strlen(ptarget);
    unsigned remaining = buffer_size - 1 - len1;

    copy(psrc2, ptarget + len1, remaining);
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above
