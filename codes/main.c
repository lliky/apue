/*
 * main 源文件
 */

#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include "src/header.h"
#include "src/7_process_enviroment/exit_atexit.h"
#include "src/7_process_enviroment/malloc_realloc.h"
#include "src/7_process_enviroment/getenv_setenv.h"
#include "src/8_process_control/process_id.h"
#include "src/8_process_control/fork.h"
#include "src/8_process_control/vfork.h"
#include "src/8_process_control/wait_waitpid.h"

int main(void)
{

    //******第七章******//
    //test_exit_atexit();
    //test_malloc_realloc();
    //test_getenv_setenv();
    //********第八章*******//
    //test_process_id();
    //test_fork();
    //test_vfork();
    test_wait_waitpid();
    return 0;
}
