/*
 * Copyright (C) Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, you can obtain one at https://mozilla.org/MPL/2.0/.
 *
 * See the COPYRIGHT file distributed with this work for additional
 * information regarding copyright ownership.
 */

#ifndef DNS_RESULT_H
#define DNS_RESULT_H 1

/*! \file dns/result.h */

#include <isc/lang.h>
#include <isc/result.h>

#include <dns/types.h>

ISC_LANG_BEGINDECLS

dns_rcode_t
dns_result_torcode(isc_result_t result);

isc_result_t
dns_result_fromrcode(dns_rcode_t rcode);

ISC_LANG_ENDDECLS

#endif /* DNS_RESULT_H */
