/*
  RKR_Button.h

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

/* 
 * File:   RKR_Button.h
 * Author: sspresto
 *
 * Created on April 8, 2020, 9:46 PM
 */

#ifndef RKR_BUTTON_H
#define RKR_BUTTON_H

#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>

#define BUTTON_USER_DATA   77

class RKR_Button : public Fl_Button
{
public:
    RKR_Button(int X, int Y, int W, int H, const char *label=0);
    void draw();
    void resize(int,int,int,int);
    void font_resize(int,int);
    int get_width(){return w();};
    int get_height(){return h();};
    void set_start_width(int W) {m_start_width = W;};
    void set_start_height(int H) {m_start_height = H;};
    
    int m_start_font_offset;
private:

    int m_start_height;
    int m_start_width;
    int m_previous_font_size;
};

#endif /* RKR_BUTTON_H */
