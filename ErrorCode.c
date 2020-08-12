#include "ErrorCode.h"

bool error_isSuccess(ErrorCode code) {
    return code == ERROR_SUCCESS;
}

const char* error_getErrorMessage(ErrorCode code) {
    switch(code) {
        case ERROR_SUCCESS: return "success";
        case ERROR_FAILURE: return "failure";
        default: return "";
    }
}