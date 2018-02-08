// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "mbvvol_gui.h"

void MbvvolGui::cb_mbvvol_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->MBVvol_Bypass);
 return;
}
rkr->MBVvol_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_MBVvol->cleanup();
rgui->findpos(28,(int)o->value(),o);
}
void MbvvolGui::cb_mbvvol_activar(Fl_Light_Button* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_activar_i(o,v);
}

void MbvvolGui::cb_mbvvol_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12028))rkr->efx_MBVvol->setpreset((int)o->value());
mbvvol_WD->value(rkr->efx_MBVvol->getpar(0)-64);
mbvvol_freq1->value(rkr->efx_MBVvol->getpar(1));
mbvvol_lfotype1->value(rkr->efx_MBVvol->getpar(2));
mbvvol_stdf1->value(rkr->efx_MBVvol->getpar(3));
mbvvol_freq2->value(rkr->efx_MBVvol->getpar(4));
mbvvol_lfotype2->value(rkr->efx_MBVvol->getpar(5));
mbvvol_stdf2->value(rkr->efx_MBVvol->getpar(6));
mbvvol_cross1->value(rkr->efx_MBVvol->getpar(7));
mbvvol_cross2->value(rkr->efx_MBVvol->getpar(8));
mbvvol_cross3->value(rkr->efx_MBVvol->getpar(9));
//mbvvol_combi->value(rkr->efx_MBVvol->getpar(10));
mbvvol_LB->value(rkr->efx_MBVvol->getpar(11));
mbvvol_MB1->value(rkr->efx_MBVvol->getpar(12));
mbvvol_MB2->value(rkr->efx_MBVvol->getpar(13));
mbvvol_HB->value(rkr->efx_MBVvol->getpar(14));
}
void MbvvolGui::cb_mbvvol_preset(Fl_Choice* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_preset_i(o,v);
}

Fl_Menu_Item MbvvolGui::menu_mbvvol_preset[] = {
 {"VaryVol 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"VaryVol 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"VaryVol 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void MbvvolGui::cb_mbvvol_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(248);
 return;
}
rkr->efx_MBVvol->changepar(0,(int)(o->value()+64));
}
void MbvvolGui::cb_mbvvol_WD(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_WD_i(o,v);
}

void MbvvolGui::cb_mbvvol_freq1_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(249);
 return;
}
rkr->efx_MBVvol->changepar(1,(int)o->value());
}
void MbvvolGui::cb_mbvvol_freq1(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_freq1_i(o,v);
}

void MbvvolGui::cb_mbvvol_lfotype1_i(Fl_Choice* o, void*) {
  rkr->efx_MBVvol->changepar(2,(int)o->value());
}
void MbvvolGui::cb_mbvvol_lfotype1(Fl_Choice* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_lfotype1_i(o,v);
}

void MbvvolGui::cb_mbvvol_stdf1_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(250);
 return;
}
rkr->efx_MBVvol->changepar(3,(int)o->value());
}
void MbvvolGui::cb_mbvvol_stdf1(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_stdf1_i(o,v);
}

void MbvvolGui::cb_mbvvol_freq2_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(251);
 return;
}
rkr->efx_MBVvol->changepar(4,(int)o->value());
}
void MbvvolGui::cb_mbvvol_freq2(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_freq2_i(o,v);
}

void MbvvolGui::cb_mbvvol_lfotype2_i(Fl_Choice* o, void*) {
  rkr->efx_MBVvol->changepar(5,(int)o->value());
}
void MbvvolGui::cb_mbvvol_lfotype2(Fl_Choice* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_lfotype2_i(o,v);
}

void MbvvolGui::cb_mbvvol_stdf2_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(252);
 return;
}
rkr->efx_MBVvol->changepar(6,(int)o->value());
}
void MbvvolGui::cb_mbvvol_stdf2(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_stdf2_i(o,v);
}

void MbvvolGui::cb_mbvvol_cross1_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(253);
 return;
}
rkr->efx_MBVvol->changepar(7,(int)o->value());
}
void MbvvolGui::cb_mbvvol_cross1(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_cross1_i(o,v);
}

void MbvvolGui::cb_mbvvol_cross2_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(254);
 return;
}
rkr->efx_MBVvol->changepar(8,(int)o->value());
}
void MbvvolGui::cb_mbvvol_cross2(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_cross2_i(o,v);
}

void MbvvolGui::cb_mbvvol_cross3_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(255);
 return;
}
rkr->efx_MBVvol->changepar(9,(int)o->value());
}
void MbvvolGui::cb_mbvvol_cross3(SliderW* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_cross3_i(o,v);
}

void MbvvolGui::cb_mbvvol_LB_i(Fl_Choice* o, void*) {
  rkr->efx_MBVvol->changepar(11,(int)o->value());
}
void MbvvolGui::cb_mbvvol_LB(Fl_Choice* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_LB_i(o,v);
}

Fl_Menu_Item MbvvolGui::menu_mbvvol_LB[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void MbvvolGui::cb_mbvvol_MB1_i(Fl_Choice* o, void*) {
  rkr->efx_MBVvol->changepar(12,(int)o->value());
}
void MbvvolGui::cb_mbvvol_MB1(Fl_Choice* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_MB1_i(o,v);
}

Fl_Menu_Item MbvvolGui::menu_mbvvol_MB1[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void MbvvolGui::cb_mbvvol_MB2_i(Fl_Choice* o, void*) {
  rkr->efx_MBVvol->changepar(13,(int)o->value());
}
void MbvvolGui::cb_mbvvol_MB2(Fl_Choice* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_MB2_i(o,v);
}

Fl_Menu_Item MbvvolGui::menu_mbvvol_MB2[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void MbvvolGui::cb_mbvvol_HB_i(Fl_Choice* o, void*) {
  rkr->efx_MBVvol->changepar(14,(int)o->value());
}
void MbvvolGui::cb_mbvvol_HB(Fl_Choice* o, void* v) {
  ((MbvvolGui*)(o->parent()))->cb_mbvvol_HB_i(o,v);
}

Fl_Menu_Item MbvvolGui::menu_mbvvol_HB[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};
MbvvolGui::MbvvolGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ mbvvol_activar = new Fl_Light_Button(7, 5, 34, 18, "On");
  mbvvol_activar->shortcut(0x38);
  mbvvol_activar->color((Fl_Color)62);
  mbvvol_activar->selection_color((Fl_Color)1);
  mbvvol_activar->labelsize(10);
  mbvvol_activar->callback((Fl_Callback*)cb_mbvvol_activar, (void*)(2));
  mbvvol_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  mbvvol_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* mbvvol_activar
{ mbvvol_preset = new Fl_Choice(79, 5, 76, 18, "Preset");
  mbvvol_preset->down_box(FL_BORDER_BOX);
  mbvvol_preset->selection_color(FL_FOREGROUND_COLOR);
  mbvvol_preset->labelsize(10);
  mbvvol_preset->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_preset->textsize(10);
  mbvvol_preset->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_preset->callback((Fl_Callback*)cb_mbvvol_preset, (void*)(12028));
  mbvvol_preset->when(FL_WHEN_RELEASE_ALWAYS);
  mbvvol_preset->menu(menu_mbvvol_preset);
} // Fl_Choice* mbvvol_preset
{ mbvvol_WD = new SliderW(54, 28, 100, 10, "Wet/Dry");
  mbvvol_WD->type(5);
  mbvvol_WD->box(FL_FLAT_BOX);
  mbvvol_WD->color((Fl_Color)178);
  mbvvol_WD->selection_color((Fl_Color)62);
  mbvvol_WD->labeltype(FL_NORMAL_LABEL);
  mbvvol_WD->labelfont(0);
  mbvvol_WD->labelsize(10);
  mbvvol_WD->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_WD->minimum(-64);
  mbvvol_WD->maximum(63);
  mbvvol_WD->step(1);
  mbvvol_WD->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_WD->callback((Fl_Callback*)cb_mbvvol_WD);
  mbvvol_WD->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_WD->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_WD
{ mbvvol_freq1 = new SliderW(54, 40, 100, 10, "Tempo 1");
  mbvvol_freq1->type(5);
  mbvvol_freq1->box(FL_FLAT_BOX);
  mbvvol_freq1->color((Fl_Color)178);
  mbvvol_freq1->selection_color((Fl_Color)62);
  mbvvol_freq1->labeltype(FL_NORMAL_LABEL);
  mbvvol_freq1->labelfont(0);
  mbvvol_freq1->labelsize(10);
  mbvvol_freq1->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_freq1->minimum(1);
  mbvvol_freq1->maximum(600);
  mbvvol_freq1->step(1);
  mbvvol_freq1->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_freq1->callback((Fl_Callback*)cb_mbvvol_freq1);
  mbvvol_freq1->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_freq1->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_freq1
{ Fl_Choice* o = mbvvol_lfotype1 = new Fl_Choice(65, 53, 72, 16, "LFO 1 Type");
  mbvvol_lfotype1->down_box(FL_BORDER_BOX);
  mbvvol_lfotype1->selection_color(FL_FOREGROUND_COLOR);
  mbvvol_lfotype1->labelsize(10);
  mbvvol_lfotype1->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_lfotype1->textsize(10);
  mbvvol_lfotype1->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_lfotype1->callback((Fl_Callback*)cb_mbvvol_lfotype1);
  o->menu(m_lfo_menu->get_lfo_type());
} // Fl_Choice* mbvvol_lfotype1
{ mbvvol_stdf1 = new SliderW(54, 72, 100, 10, "St.df 1");
  mbvvol_stdf1->type(5);
  mbvvol_stdf1->box(FL_FLAT_BOX);
  mbvvol_stdf1->color((Fl_Color)178);
  mbvvol_stdf1->selection_color((Fl_Color)62);
  mbvvol_stdf1->labeltype(FL_NORMAL_LABEL);
  mbvvol_stdf1->labelfont(0);
  mbvvol_stdf1->labelsize(10);
  mbvvol_stdf1->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_stdf1->maximum(127);
  mbvvol_stdf1->step(1);
  mbvvol_stdf1->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_stdf1->callback((Fl_Callback*)cb_mbvvol_stdf1);
  mbvvol_stdf1->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_stdf1->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_stdf1
{ mbvvol_freq2 = new SliderW(54, 84, 100, 10, "Tempo 2");
  mbvvol_freq2->type(5);
  mbvvol_freq2->box(FL_FLAT_BOX);
  mbvvol_freq2->color((Fl_Color)178);
  mbvvol_freq2->selection_color((Fl_Color)62);
  mbvvol_freq2->labeltype(FL_NORMAL_LABEL);
  mbvvol_freq2->labelfont(0);
  mbvvol_freq2->labelsize(10);
  mbvvol_freq2->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_freq2->minimum(1);
  mbvvol_freq2->maximum(600);
  mbvvol_freq2->step(1);
  mbvvol_freq2->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_freq2->callback((Fl_Callback*)cb_mbvvol_freq2);
  mbvvol_freq2->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_freq2->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_freq2
{ Fl_Choice* o = mbvvol_lfotype2 = new Fl_Choice(65, 97, 72, 16, "LFO 2 Type");
  mbvvol_lfotype2->down_box(FL_BORDER_BOX);
  mbvvol_lfotype2->selection_color(FL_FOREGROUND_COLOR);
  mbvvol_lfotype2->labelsize(10);
  mbvvol_lfotype2->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_lfotype2->textsize(10);
  mbvvol_lfotype2->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_lfotype2->callback((Fl_Callback*)cb_mbvvol_lfotype2);
  o->menu(m_lfo_menu->get_lfo_type());
} // Fl_Choice* mbvvol_lfotype2
{ mbvvol_stdf2 = new SliderW(54, 116, 100, 10, "St.df 2");
  mbvvol_stdf2->type(5);
  mbvvol_stdf2->box(FL_FLAT_BOX);
  mbvvol_stdf2->color((Fl_Color)178);
  mbvvol_stdf2->selection_color((Fl_Color)62);
  mbvvol_stdf2->labeltype(FL_NORMAL_LABEL);
  mbvvol_stdf2->labelfont(0);
  mbvvol_stdf2->labelsize(10);
  mbvvol_stdf2->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_stdf2->maximum(127);
  mbvvol_stdf2->step(1);
  mbvvol_stdf2->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_stdf2->callback((Fl_Callback*)cb_mbvvol_stdf2);
  mbvvol_stdf2->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_stdf2->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_stdf2
{ mbvvol_cross1 = new SliderW(54, 128, 100, 10, "Cross1");
  mbvvol_cross1->type(5);
  mbvvol_cross1->box(FL_FLAT_BOX);
  mbvvol_cross1->color((Fl_Color)178);
  mbvvol_cross1->selection_color((Fl_Color)62);
  mbvvol_cross1->labeltype(FL_NORMAL_LABEL);
  mbvvol_cross1->labelfont(0);
  mbvvol_cross1->labelsize(10);
  mbvvol_cross1->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_cross1->minimum(20);
  mbvvol_cross1->maximum(1000);
  mbvvol_cross1->step(1);
  mbvvol_cross1->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_cross1->callback((Fl_Callback*)cb_mbvvol_cross1);
  mbvvol_cross1->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_cross1->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_cross1
{ mbvvol_cross2 = new SliderW(54, 140, 100, 10, "Cross2");
  mbvvol_cross2->type(5);
  mbvvol_cross2->box(FL_FLAT_BOX);
  mbvvol_cross2->color((Fl_Color)178);
  mbvvol_cross2->selection_color((Fl_Color)62);
  mbvvol_cross2->labeltype(FL_NORMAL_LABEL);
  mbvvol_cross2->labelfont(0);
  mbvvol_cross2->labelsize(10);
  mbvvol_cross2->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_cross2->minimum(1000);
  mbvvol_cross2->maximum(8000);
  mbvvol_cross2->step(1);
  mbvvol_cross2->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_cross2->callback((Fl_Callback*)cb_mbvvol_cross2);
  mbvvol_cross2->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_cross2->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_cross2
{ mbvvol_cross3 = new SliderW(54, 152, 100, 10, "Cross3");
  mbvvol_cross3->type(5);
  mbvvol_cross3->box(FL_FLAT_BOX);
  mbvvol_cross3->color((Fl_Color)178);
  mbvvol_cross3->selection_color((Fl_Color)62);
  mbvvol_cross3->labeltype(FL_NORMAL_LABEL);
  mbvvol_cross3->labelfont(0);
  mbvvol_cross3->labelsize(10);
  mbvvol_cross3->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_cross3->minimum(2000);
  mbvvol_cross3->maximum(26000);
  mbvvol_cross3->step(1);
  mbvvol_cross3->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_cross3->callback((Fl_Callback*)cb_mbvvol_cross3);
  mbvvol_cross3->align(Fl_Align(FL_ALIGN_LEFT));
  mbvvol_cross3->when(FL_WHEN_CHANGED);
} // SliderW* mbvvol_cross3
{ mbvvol_LB = new Fl_Choice(11, 164, 27, 16, "L");
  mbvvol_LB->tooltip("Low Band Volume");
  mbvvol_LB->down_box(FL_BORDER_BOX);
  mbvvol_LB->selection_color(FL_FOREGROUND_COLOR);
  mbvvol_LB->labelsize(8);
  mbvvol_LB->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_LB->textsize(9);
  mbvvol_LB->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_LB->callback((Fl_Callback*)cb_mbvvol_LB, (void*)(12));
  mbvvol_LB->menu(menu_mbvvol_LB);
} // Fl_Choice* mbvvol_LB
{ mbvvol_MB1 = new Fl_Choice(50, 164, 27, 16, "M");
  mbvvol_MB1->tooltip("Mid Band 1 Volume");
  mbvvol_MB1->down_box(FL_BORDER_BOX);
  mbvvol_MB1->selection_color(FL_FOREGROUND_COLOR);
  mbvvol_MB1->labelsize(8);
  mbvvol_MB1->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_MB1->textsize(9);
  mbvvol_MB1->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_MB1->callback((Fl_Callback*)cb_mbvvol_MB1, (void*)(12));
  mbvvol_MB1->menu(menu_mbvvol_MB1);
} // Fl_Choice* mbvvol_MB1
{ mbvvol_MB2 = new Fl_Choice(90, 164, 27, 16, "M");
  mbvvol_MB2->tooltip("Mid Band 2 Volume");
  mbvvol_MB2->down_box(FL_BORDER_BOX);
  mbvvol_MB2->selection_color(FL_FOREGROUND_COLOR);
  mbvvol_MB2->labelsize(8);
  mbvvol_MB2->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_MB2->textsize(9);
  mbvvol_MB2->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_MB2->callback((Fl_Callback*)cb_mbvvol_MB2, (void*)(12));
  mbvvol_MB2->menu(menu_mbvvol_MB2);
} // Fl_Choice* mbvvol_MB2
{ mbvvol_HB = new Fl_Choice(128, 164, 27, 16, "H");
  mbvvol_HB->tooltip("High Band Volume");
  mbvvol_HB->down_box(FL_BORDER_BOX);
  mbvvol_HB->selection_color(FL_FOREGROUND_COLOR);
  mbvvol_HB->labelsize(8);
  mbvvol_HB->labelcolor(FL_BACKGROUND2_COLOR);
  mbvvol_HB->textsize(9);
  mbvvol_HB->textcolor(FL_BACKGROUND2_COLOR);
  mbvvol_HB->callback((Fl_Callback*)cb_mbvvol_HB, (void*)(12));
  mbvvol_HB->menu(menu_mbvvol_HB);
} // Fl_Choice* mbvvol_HB
position(X, Y);
end();
}