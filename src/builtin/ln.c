#include <onix/types.h>
#include <onix/stdio.h>
#include <onix/syscall.h>
#include <onix/string.h>
#include <onix/errno.h>

void print_error(int err)
{
    if (err >= 0)
        return;
    printf("%s\n", strerror(err));
}

int main(int argc, char const *argv[], char const *envp[])
{
    if (argc < 3)
    {
        return 0;
    }
    print_error(link(argv[1], argv[2]));
}