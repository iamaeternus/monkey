/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Monkey HTTP Server
 *  ==================
 *  Copyright 2001-2015 Monkey Software LLC <eduardo@monkey.io>
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef MK_CACHE_TLS_H
#define MK_CACHE_TLS_H

__thread struct mk_iov *mk_tls_cache_iov_header;
__thread mk_ptr_t *mk_tls_cache_header_cl;
__thread mk_ptr_t *mk_tls_cache_header_lm;
__thread struct tm *mk_tls_cache_gmtime;
__thread struct mk_gmt_cache *mk_tls_cache_gmtext;

#endif
