#ifndef _SKIN_H_
#define _SKIN_H_

#include <nds.h>
#include "fontbase.h"
#include "bitmapbase.h"
#include "gadgetstyle.h"

namespace WoopsiUI {

	typedef struct {
		BitmapBase* focus;
		BitmapBase* blur;
		BitmapBase* focusClick;
		BitmapBase* blurClick;
		u16 width;
		u16 height;
	} SkinBitmap;

	typedef struct {
		GadgetStyle style;
		SkinBitmap bitmap;
		u16 offsetX;
		u16 offsetY;
		u8 permeable : 1;
		u8 borderless : 1;
		u8 visible : 1;
	} GadgetSkin;

	typedef struct {
		GadgetSkin titleBar;
		GadgetSkin depthButton;
		GadgetSkin flipButton;
		GadgetSkin screen;
	} ScreenSkin;

	typedef struct {
		GadgetSkin topLeftBorder;
		GadgetSkin topCentreBorder;
		GadgetSkin topRightBorder;
		GadgetSkin leftBorder;
		GadgetSkin rightBorder;
		GadgetSkin bottomLeftBorder;
		GadgetSkin bottomRightBorder;
		GadgetSkin bottomCentreBorder;
		GadgetSkin depthButton;
		GadgetSkin closeButton;
		GadgetSkin window;
	} WindowSkin;
}

#endif
