#ifndef VERSION_H
#define VERSION_H

#include <ntddk.h>

extern UINT32 KTHREAD_STACK_BASE_OFFSET = 0;
extern UINT32 KTHREAD_STACK_LIMIT_OFFSET = 0;
extern UINT32 KTHREAD_THREADLIST_OFFSET = 0;
extern UINT32 KTHREAD_APC_STATE_OFFSET = 0;
extern UINT32 KTHREAD_START_ADDRESS_OFFSET = 0;
extern UINT32 KTHREAD_MISC_FLAGS_OFFSET = 0;
extern UINT32 KTHREAD_WAIT_IRQL_OFFSET = 0;
extern UINT32 KTHREAD_PREVIOUS_MODE_OFFSET = 0;
extern UINT32 KTHREAD_STATE_OFFSET = 0;
extern UINT32 KTHREAD_MISC_FLAGS_APC_QUEUEABLE = 0;
extern UINT32 KTHREAD_MISC_FLAGS_ALERTABLE = 0;

extern UINT32 EPROCESS_PEAK_VIRTUAL_SIZE_OFFSET = 0;
extern UINT32 EPROCESS_VAD_ROOT_OFFSET = 0;
extern UINT32 EPROCESS_OBJECT_TABLE_OFFSET = 0;
extern UINT32 EPROCESS_IMAGE_NAME_OFFSET = 0;
extern UINT32 EPROCESS_PEB_OFFSET = 0;

extern UINT32 KPROCESS_THREADLIST_OFFSET = 0;
extern UINT32 KPROCESS_DIRECTORY_TABLE_BASE_OFFSET = 0;

extern UINT32 OBJECT_HEADER_TYPE_INDEX_OFFSET = 0;

extern UINT32 POOL_HEADER_BLOCK_SIZE_OFFSET = 0;
extern UINT32 POOL_HEADER_TAG_OFFSET = 0;

extern UINT32 KPCRB_CURRENT_THREAD_OFFSET = 0;


#endif
