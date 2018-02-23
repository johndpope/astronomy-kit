/*
Module : AAVSOP87D_JUP.h
Purpose: Implementation for the algorithms for VSOP87
Created: PJN / 13-09-2015
History: PJN / 13-09-2015 1. Initial public release.

Copyright (c) 2015 - 2018 by PJ Naughter (Web: www.naughter.com, Email: pjna@naughter.com)

All rights reserved.

Copyright / Usage Details:

You are allowed to include the source code in any product (commercial, shareware, freeware or otherwise)
when your product is released in binary form. You are allowed to modify the source code in any way you want
except you cannot modify the copyright details at the top of each module. If you want to distribute source
code with your application, then you are only allowed to distribute versions released by the author. This is
to maintain a single distribution point for the source code.

*/


/////////////////////// Macros / Defines //////////////////////////////////////

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef __AAVSOP87D_JUP_H__
#define __AAVSOP87D_JUP_H__

#ifndef AAPLUS_EXT_CLASS
#define AAPLUS_EXT_CLASS
#endif


////////////////////////////// Classes ////////////////////////////////////////

class AAPLUS_EXT_CLASS CAAVSOP87D_Jupiter
{
public:
  static double L(double JD);
  static double L_DASH(double JD);
  static double B(double JD);
  static double B_DASH(double JD);
  static double R(double JD);
  static double R_DASH(double JD);
};


#endif //#ifndef __AAVSOP87D_JUP_H_
