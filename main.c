#include <stdio.h>
#include <string.h>
#include "hmac-md5.h"
int main() {
    char* input="iUmDZItFtGUbYQNFHYyRIIBAuvfBx";
    char* key="kanxue_imyang";
    md5_digest_t out={0};
    hmac_md5(input,strlen(input),key,strlen(key),out);
    for(int i=0;i<sizeof(out);i++){
        printf("%x ",out[i]);
    }
    return 0;
}
