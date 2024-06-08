#include <stdio.h>
#include <sdrplay_api.h>

int main(int argc, const char * argv[]) {
    float version = 0;
    sdrplay_api_Open();
    sdrplay_api_ApiVersion(&version);
    printf("sdrplay_api_ApiVersion %f \n", version);
    sdrplay_api_Close();
    return 0;
}
