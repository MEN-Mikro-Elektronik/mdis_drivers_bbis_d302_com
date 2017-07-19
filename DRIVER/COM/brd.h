/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: brd.h
 *
 *       Author: ds
 *        $Date: 2001/11/12 15:48:13 $
 *    $Revision: 1.1 $
 *
 *  Description: Internal header file for board specific defines
 *
 *     Switches: ---
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: brd.h,v $
 * Revision 1.1  2001/11/12 15:48:13  Schmidt
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 2001 by MEN mikro elektronik GmbH, Nuremberg, Germany
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

#ifndef _BRD_H
#define _BRD_H

#ifdef __cplusplus
    extern "C" {
#endif


/*-----------------------------------------+
|  D302                                    |
+-----------------------------------------*/
#if D302_VARIANT==D302
#	define BBNAME					"D302"			/* board function prefix			*/
#	define BRD_BUSTYPE				OSS_BUSTYPE_PCI	/* board bus type PCI				*/
#	define BRD_PCI_VEN_ID			D302_PCI_VEN_ID	/* pci vendor-id					*/
#	define BRD_PCI_DEV_ID			D302_PCI_DEV_ID	/* pci device-id					*/
#	define BRD_MODULE_NBR			4				/* number of devices				*/
#	define BRD_MBASE_OFFSET(m)		((m)*0x200 )	/* offset to module base addr		*/
#	define BRD_MODULE_SIZE			0x100			/* size of module space				*/
#	define BRD_CTRLR_OFFSET			0x104			/* offset to ctrl/status registers	*/
#	define BRD_CTRL_SIZE			0x4				/* size of ctrl/status registers	*/
#endif


#ifdef __cplusplus
    }
#endif

#endif /* _BRD_H */
