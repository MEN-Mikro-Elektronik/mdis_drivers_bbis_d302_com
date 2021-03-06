/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: d302_int.h
 *
 *       Author: ds
 *
 *  Description: Internal header file for D302 BBIS
 *
 *     Switches: ---
 *
 *
 *---------------------------------------------------------------------------
 * Copyright 2001-2019, MEN Mikro Elektronik GmbH
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _D302_H
#define _D302_H

#ifdef __cplusplus
    extern "C" {
#endif


/*-----------------------------------------+
|  DEFINES                                 |
+-----------------------------------------*/
#define D302_PCI_VEN_ID			0x1172	/* pci vendor-id				*/
#define D302_PCI_DEV_ID			0xD302	/* pci device-id				*/

#if (defined(_BIG_ENDIAN_)    && !defined(MAC_BYTESWAP)) \
 || (defined(_LITTLE_ENDIAN_) &&  defined(MAC_BYTESWAP))
# define D302_LCTRL				0x02	/* offset to local ctrl-reg		*/
# define D302_GCTRL				0x00	/* offset to global ctrl-reg	*/
#else
# define D302_LCTRL				0x00	/* offset to local ctrl-reg		*/
# define D302_GCTRL				0x02	/* offset to global ctrl-reg	*/
#endif

/* local ctrl-reg */
#define D302_LCTRL_IP			0x01	/* module interrupt pending		*/
#define D302_LCTRL_IEN			0x02	/* module interrupt enable		*/
#define D302_LCTRL_FAST			0x04	/* module fast PCI access		*/
#define D302_LCTRL_TOUT			0x08	/* module timeout occured		*/

/* global ctrl-reg */
#define D302_GCTRL_GIP			0x01	/* global interrupt pending		*/
#define D302_GCTRL_GIEN			0x02	/* global interrupt enable		*/


#ifdef __cplusplus
    }
#endif

#endif /* _D302_H */
