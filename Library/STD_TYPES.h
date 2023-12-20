/*************************************************/
/*                     Name: Ziyad Mohammed     */
/*                     Date: 08/09/2023          */
/*                     Version: 1.0             */
/************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char uint8;
typedef signed char sint8;

typedef unsigned short int uint16;
typedef signed short int sint16;

typedef unsigned long int uint32;
typedef signed long int sint32;

typedef float f32;
typedef double f64;
typedef long double f96;

#define NULL			((void*)0)

typedef enum
{
	NULL_PTR_ERR 	= 0u,
	NULL_PTR_SUCESS = 1u
}NULL_PTR_Error_State_t;

#define NULL_PTR_ERR	0u

#endif // STD_TYPES_H
