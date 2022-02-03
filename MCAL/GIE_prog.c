#include "../TYPES.h"
#include "../BIT_LEVEL.h"
#include "GIE_private.h"
#include "GIE_int.h"


/*GIE Enable*/

void GIE_VidEnable(void){
	setbit(SREG,SREG_I_BIT);
}

/*GIE Disable*/

void GIE_VidDisable(void){
	clrbit(SREG,SREG_I_BIT);
}
