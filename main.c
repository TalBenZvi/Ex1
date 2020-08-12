#include <stdio.h>
#include "ErrorCode.h"

int main() {
    ErrorCode code = ERROR_SUCCESS;
    if (error_isSuccess(code)) {
        printf("good\n");
    } else {
        printf("bad\n");
    }
    printf("%s",error_getErrorMessage(code));
}