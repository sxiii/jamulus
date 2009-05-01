/******************************************************************************\
 * Copyright (c) 2004-2009
 *
 * Author(s):
 *  Volker Fischer
 *
 ******************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later 
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more 
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
\******************************************************************************/

#if !defined ( _MULTCOLORLEDBAR_H__FD6B49B5_87DF_48DD_E1606C2AC__INCLUDED_ )
#define _MULTCOLORLEDBAR_H__FD6B49B5_87DF_48DD_E1606C2AC__INCLUDED_

#include <qlabel.h>
#include <qpixmap.h>
#include <qtimer.h>
#include "global.h"


/* Classes ********************************************************************/
class CMultiColorLEDBar : public QLabel
{
    Q_OBJECT

public:
    CMultiColorLEDBar ( QWidget* parent = 0, Qt::WindowFlags f = 0 );

protected:
    QPixmap BitmCubeRoundGrey;
    QPixmap BitmCubeRoundGreen;
    QPixmap BitmCubeRoundYellow;
    QPixmap BitmCubeRoundRed;
    QPixmap BitmCubeEdgeGrey;
    QPixmap BitmCubeEdgeGreen;
    QPixmap BitmCubeEdgeYellow;
    QPixmap BitmCubeEdgeRed;
};

#endif // _MULTCOLORLEDBAR_H__FD6B49B5_87DF_48DD_E1606C2AC__INCLUDED_
