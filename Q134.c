#include <stdio.h>

int main(void) {
    enum Result {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    for (int value = SUCCESS; value <= TIMEOUT; ++value) {
        enum Result status = (enum Result)value;
        switch (status) {
            case SUCCESS:
                printf("SUCCESS: Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("FAILURE: Operation failed.\n");
                break;
            case TIMEOUT:
                printf("TIMEOUT: Operation timed out.\n");
                break;
        }
    }

    return 0;
}
