/*******************************************************************************
* File Name: comp_in.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_comp_in_ALIASES_H) /* Pins comp_in_ALIASES_H */
#define CY_PINS_comp_in_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define comp_in_0			(comp_in__0__PC)
#define comp_in_0_PS		(comp_in__0__PS)
#define comp_in_0_PC		(comp_in__0__PC)
#define comp_in_0_DR		(comp_in__0__DR)
#define comp_in_0_SHIFT	(comp_in__0__SHIFT)
#define comp_in_0_INTR	((uint16)((uint16)0x0003u << (comp_in__0__SHIFT*2u)))

#define comp_in_INTR_ALL	 ((uint16)(comp_in_0_INTR))


#endif /* End Pins comp_in_ALIASES_H */


/* [] END OF FILE */
