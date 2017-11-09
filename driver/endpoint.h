#pragma once
#ifndef _VBUS_SEANXS_ENDPOINT_H
#define _VBUS_SEANXS_ENDPOINT_H

#include "common.h"

EXTERN_C_START

typedef struct _ENDPOINT_CONTEXT
{
	WDFQUEUE queue;
	BOOLEAN IsDefault;
	ULONG MaxPacketSize;
}
ENDPOINT_CONTEXT, *PENDPOINT_CONTEXT;

WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(ENDPOINT_CONTEXT, GetEndpointContext)

EVT_UCX_ENDPOINT_PURGE Endpoint_EvtUcxEndpointPurge;
EVT_UCX_ENDPOINT_START Endpoint_EvtUcxEndpointStart;
EVT_UCX_ENDPOINT_ABORT Endpoint_EvtUcxEndpointAbort;
EVT_UCX_ENDPOINT_OK_TO_CANCEL_TRANSFERS Endpoint_EvtUcxEndpointOkToCancelTransfers;
EVT_UCX_DEFAULT_ENDPOINT_UPDATE Endpoint_EvtUcxDefaultEndpointUpdate;
EVT_UCX_ENDPOINT_RESET Endpoint_EvtUcxEndpointReset;
EVT_UCX_ENDPOINT_STATIC_STREAMS_ADD Endpoint_EvtUcxEndpointStaticStreamsAdd;
EVT_UCX_ENDPOINT_STATIC_STREAMS_DISABLE Endpoint_EvtUcxEndpointStaticStreamsDisable;
EVT_UCX_ENDPOINT_STATIC_STREAMS_ENABLE Endpoint_EvtUcxEndpointStaticStreamsEnable;

EVT_WDF_IO_QUEUE_STATE Endpoint_PurgeComplete;
EVT_WDF_IO_QUEUE_STATE Endpoint_AbortComplete;

EXTERN_C_END
#endif // !_VBUS_SEANXS_ENDPOINT_H
