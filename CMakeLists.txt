#
# Copyright (c) 2005, Condor Engineering, Inc. 
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without 
# modification, are permitted provided that the following conditions 
# are met:
# 
# 1. Redistributions of source code must retain the above copyright 
# notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright 
# notice, this list of conditions and the following disclaimer in the 
# documentation and/or other materials provided with the distribution. 
# 3. Neither the name of the Company (Condor Engineering, Inc) nor the
# names of its contributors may be used to endorse or promote products 
# derived from this software without specific prior written permission. 
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
# 
#
cmake_minimum_required(VERSION 3.5)

project(ntar)

set(TARGET_SOURCES
    block.c
    option_readers.c
    plugin_idb.c
    plugins.c
    file_handlers.c
    ntar.c
    option_writers.c
    plugin_pktb.c
    plugin_spb.c
    section.c
    error.c
    )
set(TARGET_PUBLIC_HEADERS
    block_headers.h
    bittypes.h
    ntar.h
    plugins.h
    plugin_idb.h
    plugin_pktb.h
    plugin_spb.h
    )

add_library(${PROJECT_NAME} STATIC
    ${TARGET_SOURCES}
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/
    )

set_target_properties(${PROJECT_NAME}
    PROPERTIES PUBLIC_HEADER 
    "${TARGET_PUBLIC_HEADERS}"
    )

install(TARGETS ${PROJECT_NAME}
    DESTINATION lib
    PUBLIC_HEADER DESTINATION include/${PROJECT_NAME}
    )
