#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    uid_t uid = geteuid();
    gid_t gid = getegid();
  
    printf ("uid=%d, gid=%d\n", uid, gid);
    return 0;
}
