#include "evmc/evmc.h"
#include <jni.h>

#ifndef _Included_org_ethereum_evmc_Host
#define _Included_org_ethereum_evmc_Host
#ifdef __cplusplus
extern "C" {
#endif

struct evmc_host_context
{
    int index;
};

int set_jvm(JNIEnv*);
const struct evmc_host_interface* get_host_interface();

#ifdef __cplusplus
}
#endif
#endif
