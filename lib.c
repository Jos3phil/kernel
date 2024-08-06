
/* La fonction memcopy permet de copier n octets de src vers dest.
 * Les adresses sont lineaires.
 */
#include <stddef.h>
#include <string.h>

void *memcpy(void *dst, const void *src, size_t n)
{
    char *d = dst;
    const char *s = src;
    while (n--)
        *d++ = *s++;
    return dst;
}