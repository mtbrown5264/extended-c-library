/*******************************************************************************
 * File Name: console.h
 * Author(s): Michael Brown
 * Date: Sep 4, 2017
 * Revision: 0.0.1
 *
 * Contact Information
 * 
 * Email: mtb5264@gmail.com
 * Phone:
 * Address:
 *
 * Revision     Date           Initials    Brief
 *
 * 0.0.1        Sep 4, 2017    mtb         initial version
 *
 ******************************************************************************/

#ifndef CONSOLE_H_
#define CONSOLE_H_

/*******************************************************************************
 * System includes
 ******************************************************************************/

/* for printf */
#include <stdio.h>

/*******************************************************************************
 * Relative includes
 ******************************************************************************/



/*******************************************************************************
 * Public types/enumerations/variables
 ******************************************************************************/

/* console redirection */
#define CONSOLE_OUT(...) printf(__VA_ARGS__)

/* console font colors */
#define CONSOLE_FONT_COLOR_RED "\x1B[31m"
#define CONSOLE_FONT_COLOR_GREEN "\x1B[32m"
#define CONSOLE_FONT_COLOR_YELLOW "\x1B[33m"
#define CONSOLE_FONT_COLOR_BLUE "\x1B[34m"
#define CONSOLE_FONT_COLOR_MAGENTA "\x1B[35m"
#define CONSOLE_FONT_COLOR_CYAN "\x1B[36m"
#define CONSOLE_FONT_COLOR_WHITE "\x1B[37m"
#define CONSOLE_FONT_COLOR_RESET "\x1B[0m"

/*******************************************************************************
 * Public functions
 ******************************************************************************/



#endif /* CONSOLE_H_ */

/*******************************************************************************
 * End of file
 ******************************************************************************/
