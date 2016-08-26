//*********************************************************************
//
//	Name:		SpinningCubeDualDisplay.h
//	Created by:	Jeff Duncan
//	Date:		November 20, 2002
//
//	Copyright (c) alt.software inc.
//
//	Description:	Application-global functions and variables
//					
//*********************************************************************


#ifndef _SPINNINGCUBE_H_
#define _SPINNINGCUBE_H_


//*********************************************************************
//	Includes
//*********************************************************************


//*********************************************************************
//	Defines
//*********************************************************************

//*********************************************************************
//	Name:		Banner
//	Created by:	Jeff Duncan
//	Date:		November 21, 2002
//	Description:	Centralizes information for banner display.
//  
//*********************************************************************
struct Banner
{
    int  Dimensions[2];
    int  LogoTextureID;
    char FPSString[64];
    char DurationString[64];
};

//*********************************************************************
//	Name:		BannerUpdate
//	Created by:	Jeff Duncan
//	Date:		November 21, 2002
//	Description:	Update display banner information with current data.
//                  Modifies pBanner and Start if necessary.
//  
//*********************************************************************
void BannerUpdate( Banner *pBanner, double start, double finish, int Screen );

//*********************************************************************
//	Name:		BannerRender
//	Created by:	Jeff Duncan
//	Date:		November 21, 2002
//	Description:	Renders the specified banner to screen.
//  
//*********************************************************************
void BannerRender( Banner const *pBanner );

//*********************************************************************
//	Name:		SceneRender
//	Created by:	Jeff Duncan
//	Date:		November 21, 2002
//	Description:	Renders the frame at the specified tick.
//  
//*********************************************************************
void SceneRender( double time, int Screen );

//*********************************************************************
//	Name:		InitGL
//	Created by:	Jeff Duncan
//	Date:		November 21, 2002
//	Description:	Set all required initialization OpenGL state and
//                  all static state.
//
//*********************************************************************
void InitGL( const unsigned int ScreenNum );

#endif // _SPINNINGCUBE_H_


