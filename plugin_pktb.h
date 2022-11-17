/*
 * Copyright (c) 2005, Condor Engineering, Inc. 
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions 
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright 
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright 
 * notice, this list of conditions and the following disclaimer in the 
 * documentation and/or other materials provided with the distribution. 
 * 3. Neither the name of the Company (Condor Engineering, Inc) nor the
 * names of its contributors may be used to endorse or promote products 
 * derived from this software without specific prior written permission. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

/*
 * Author: Gianluca Varenni <gianluca.varenni@gmail.com>
 */

#ifndef __PLUGIN_PKTB_1234h4y4h4h4
#define __PLUGIN_PKTB_1234h4y4h4h4

#include "bittypes.h"

#if defined _MSC_VER
/* this is used to have complete control over the alignment of the structures */
#pragma pack(push)
#pragma pack(1)
#else
#pragma pack(push, 1)
#endif

#define BLOCK_ID_PKTB  0x00000002

typedef struct _pkt_block
{
	u_int16		interface_id;
	u_int16		drops_count;
	u_int32		timestamp_high;
	u_int32		timestamp_low;
	u_int32		captured_len;
	u_int32		packet_len;
	void*		packet_data;	/* this will be removed when the structure is dumped to disk */
}
	pkt_block;

enum 
{
	PKTB_OPTION_FLAGS	= 2,
	PKTB_OPTION_HASH	= 4
};

#if defined _MSC_VER || defined __MINGW32__ 
/* this is used to have complete control over the alignment of the structures */
#pragma pack(pop)
#else  /* defined _MSC_VER || defined __MINGW32__  */
#pragma pack(pop)
#endif /* defined _MSC_VER || defined __MINGW32__ */

#endif /* __PLUGIN_PKTB_1234h4y4h4h4 */
