/*
 * $Id$
 *
 * Lookup contacts in usrloc
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*!
 * \file
 * \brief SIP registrar module - lookup contacts in usrloc
 * \ingroup registrar
 */


#ifndef LOOKUP_H
#define LOOKUP_H

#include "../../core/parser/msg_parser.h"
#include "../ims_usrloc_scscf/usrloc.h"


/*! \brief
 * Lookup a contact in usrloc and rewrite R-URI if found
 */
int lookup(struct sip_msg *_m, udomain_t *_d, char *ue_type);
int lookup_path_to_contact(struct sip_msg *_m, char *contact_uri);

/*! \brief
 * Return true if the AOR in the Request-URI is registered,
 * it is similar to lookup but registered neither rewrites
 * the Request-URI nor appends branches
 */
int impu_registered(struct sip_msg *_m, char *_t, char *_s);
int term_impu_registered(struct sip_msg *_m, char *_t, char *_s);
int term_impu_has_contact(struct sip_msg *_m, udomain_t *_d, char *_s);


#endif /* LOOKUP_H */
