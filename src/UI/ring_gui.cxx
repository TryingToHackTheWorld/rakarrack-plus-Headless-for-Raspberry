// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "ring_gui.h"

void RingGui::cb_ring_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Ring_Bypass);
 return;
}
rkr->Ring_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Ring->cleanup();
rgui->findpos(21,(int)o->value(),o);
}
void RingGui::cb_ring_activar(Fl_Light_Button* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_activar_i(o,v);
}

void RingGui::cb_ring_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12021))rkr->efx_Ring->setpreset((int) o->value());
ring_WD->value(rkr->efx_Ring->getpar(0));
ring_LRc->value(rkr->efx_Ring->getpar(2));
ring_input->value(rkr->efx_Ring->getpar(11));
ring_level->value(rkr->efx_Ring->getpar(3));
ring_st->value(rkr->efx_Ring->getpar(6));
ring_depth->value(rkr->efx_Ring->getpar(4));
ring_freq->value(rkr->efx_Ring->getpar(5));
ring_sin->value(rkr->efx_Ring->getpar(7));
ring_tri->value(rkr->efx_Ring->getpar(8));
ring_saw->value(rkr->efx_Ring->getpar(9));
ring_squ->value(rkr->efx_Ring->getpar(10));
ring_pan->value(rkr->efx_Ring->getpar(1));
ring_afreq->value(rkr->efx_Ring->getpar(12));
}
void RingGui::cb_ring_preset(Fl_Choice* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_preset_i(o,v);
}

Fl_Menu_Item RingGui::menu_ring_preset[] = {
 {"Saw_Sin", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"E string", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"A string", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Dissonance", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Fast Beat", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Ring Amp", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void RingGui::cb_ring_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(178);
 return;
} 
rkr->efx_Ring->changepar(0,(int)o->value());
}
void RingGui::cb_ring_WD(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_WD_i(o,v);
}

void RingGui::cb_ring_LRc_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(179);
 return;
} 
rkr->efx_Ring->changepar(2,(int)o->value());
}
void RingGui::cb_ring_LRc(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_LRc_i(o,v);
}

void RingGui::cb_ring_input_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(180);
 return;
} 
rkr->efx_Ring->changepar(11,(int)o->value());
}
void RingGui::cb_ring_input(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_input_i(o,v);
}

void RingGui::cb_ring_level_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(181);
 return;
} 
rkr->efx_Ring->changepar(3,(int)o->value());
}
void RingGui::cb_ring_level(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_level_i(o,v);
}

void RingGui::cb_ring_pan_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(182);
 return;
} 
rkr->efx_Ring->changepar(1,(int)o->value());
}
void RingGui::cb_ring_pan(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_pan_i(o,v);
}

void RingGui::cb_ring_st_i(Fl_Check_Button* o, void*) {
  rkr->efx_Ring->changepar(6,(int)o->value());
}
void RingGui::cb_ring_st(Fl_Check_Button* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_st_i(o,v);
}

void RingGui::cb_ring_afreq_i(Fl_Check_Button* o, void*) {
  rkr->efx_Ring->changepar(12,(int)o->value());
}
void RingGui::cb_ring_afreq(Fl_Check_Button* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_afreq_i(o,v);
}

void RingGui::cb_ring_depth_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(183);
 return;
} 
rkr->efx_Ring->changepar(4,(int)o->value());
}
void RingGui::cb_ring_depth(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_depth_i(o,v);
}

void RingGui::cb_ring_freq_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(184);
 return;
} 
rkr->efx_Ring->changepar(5,(int)o->value());
}
void RingGui::cb_ring_freq(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_freq_i(o,v);
}

void RingGui::cb_ring_sin_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(185);
 return;
} 
rkr->efx_Ring->changepar(7,(int)o->value());
}
void RingGui::cb_ring_sin(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_sin_i(o,v);
}

void RingGui::cb_ring_tri_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(186);
 return;
} 
rkr->efx_Ring->changepar(8,(int)o->value());
}
void RingGui::cb_ring_tri(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_tri_i(o,v);
}

void RingGui::cb_ring_saw_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(187);
 return;
} 
rkr->efx_Ring->changepar(9,(int)o->value());
}
void RingGui::cb_ring_saw(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_saw_i(o,v);
}

void RingGui::cb_ring_squ_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(188);
 return;
} 
rkr->efx_Ring->changepar(10,(int)o->value());
}
void RingGui::cb_ring_squ(SliderW* o, void* v) {
  ((RingGui*)(o->parent()))->cb_ring_squ_i(o,v);
}
RingGui::RingGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ ring_activar = new Fl_Light_Button(5, 4, 34, 18, "On");
  ring_activar->shortcut(0x34);
  ring_activar->color((Fl_Color)62);
  ring_activar->selection_color((Fl_Color)1);
  ring_activar->labelsize(10);
  ring_activar->callback((Fl_Callback*)cb_ring_activar, (void*)(2));
  ring_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  ring_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* ring_activar
{ ring_preset = new Fl_Choice(77, 4, 76, 18, "Preset");
  ring_preset->down_box(FL_BORDER_BOX);
  ring_preset->selection_color(FL_FOREGROUND_COLOR);
  ring_preset->labelsize(10);
  ring_preset->labelcolor(FL_BACKGROUND2_COLOR);
  ring_preset->textsize(10);
  ring_preset->textcolor(FL_BACKGROUND2_COLOR);
  ring_preset->callback((Fl_Callback*)cb_ring_preset, (void*)(12021));
  ring_preset->when(FL_WHEN_RELEASE_ALWAYS);
  ring_preset->menu(menu_ring_preset);
} // Fl_Choice* ring_preset
{ ring_WD = new SliderW(51, 29, 100, 10, "Wet/Dry");
  ring_WD->type(5);
  ring_WD->box(FL_FLAT_BOX);
  ring_WD->color((Fl_Color)178);
  ring_WD->selection_color((Fl_Color)62);
  ring_WD->labeltype(FL_NORMAL_LABEL);
  ring_WD->labelfont(0);
  ring_WD->labelsize(10);
  ring_WD->labelcolor(FL_BACKGROUND2_COLOR);
  ring_WD->minimum(-64);
  ring_WD->maximum(64);
  ring_WD->step(1);
  ring_WD->textcolor(FL_BACKGROUND2_COLOR);
  ring_WD->callback((Fl_Callback*)cb_ring_WD);
  ring_WD->align(Fl_Align(FL_ALIGN_LEFT));
  ring_WD->when(FL_WHEN_CHANGED);
} // SliderW* ring_WD
{ ring_LRc = new SliderW(51, 42, 100, 10, "L/R Cr.");
  ring_LRc->type(5);
  ring_LRc->box(FL_FLAT_BOX);
  ring_LRc->color((Fl_Color)178);
  ring_LRc->selection_color((Fl_Color)62);
  ring_LRc->labeltype(FL_NORMAL_LABEL);
  ring_LRc->labelfont(0);
  ring_LRc->labelsize(10);
  ring_LRc->labelcolor(FL_BACKGROUND2_COLOR);
  ring_LRc->minimum(-64);
  ring_LRc->maximum(64);
  ring_LRc->step(1);
  ring_LRc->textcolor(FL_BACKGROUND2_COLOR);
  ring_LRc->callback((Fl_Callback*)cb_ring_LRc);
  ring_LRc->align(Fl_Align(FL_ALIGN_LEFT));
  ring_LRc->when(FL_WHEN_CHANGED);
} // SliderW* ring_LRc
{ ring_input = new SliderW(51, 55, 100, 10, "Input");
  ring_input->type(5);
  ring_input->box(FL_FLAT_BOX);
  ring_input->color((Fl_Color)178);
  ring_input->selection_color((Fl_Color)62);
  ring_input->labeltype(FL_NORMAL_LABEL);
  ring_input->labelfont(0);
  ring_input->labelsize(10);
  ring_input->labelcolor(FL_BACKGROUND2_COLOR);
  ring_input->minimum(1);
  ring_input->maximum(127);
  ring_input->step(1);
  ring_input->value(1);
  ring_input->textcolor(FL_BACKGROUND2_COLOR);
  ring_input->callback((Fl_Callback*)cb_ring_input);
  ring_input->align(Fl_Align(FL_ALIGN_LEFT));
  ring_input->when(FL_WHEN_CHANGED);
} // SliderW* ring_input
{ ring_level = new SliderW(51, 68, 100, 10, "Level");
  ring_level->type(5);
  ring_level->box(FL_FLAT_BOX);
  ring_level->color((Fl_Color)178);
  ring_level->selection_color((Fl_Color)62);
  ring_level->labeltype(FL_NORMAL_LABEL);
  ring_level->labelfont(0);
  ring_level->labelsize(10);
  ring_level->labelcolor(FL_BACKGROUND2_COLOR);
  ring_level->maximum(127);
  ring_level->step(1);
  ring_level->textcolor(FL_BACKGROUND2_COLOR);
  ring_level->callback((Fl_Callback*)cb_ring_level);
  ring_level->align(Fl_Align(FL_ALIGN_LEFT));
  ring_level->when(FL_WHEN_CHANGED);
} // SliderW* ring_level
{ ring_pan = new SliderW(51, 81, 100, 10, "Pan");
  ring_pan->type(5);
  ring_pan->box(FL_FLAT_BOX);
  ring_pan->color((Fl_Color)178);
  ring_pan->selection_color((Fl_Color)62);
  ring_pan->labeltype(FL_NORMAL_LABEL);
  ring_pan->labelfont(0);
  ring_pan->labelsize(10);
  ring_pan->labelcolor(FL_BACKGROUND2_COLOR);
  ring_pan->minimum(-64);
  ring_pan->maximum(64);
  ring_pan->step(1);
  ring_pan->textcolor(FL_BACKGROUND2_COLOR);
  ring_pan->callback((Fl_Callback*)cb_ring_pan);
  ring_pan->align(Fl_Align(FL_ALIGN_LEFT));
  ring_pan->when(FL_WHEN_CHANGED);
} // SliderW* ring_pan
{ ring_st = new Fl_Check_Button(28, 92, 52, 15, "Stereo");
  ring_st->down_box(FL_BORDER_BOX);
  ring_st->labelsize(10);
  ring_st->labelcolor(FL_BACKGROUND2_COLOR);
  ring_st->callback((Fl_Callback*)cb_ring_st, (void*)(2));
} // Fl_Check_Button* ring_st
{ ring_afreq = new Fl_Check_Button(80, 92, 69, 15, "Auto Freq");
  ring_afreq->down_box(FL_BORDER_BOX);
  ring_afreq->labelsize(10);
  ring_afreq->labelcolor(FL_BACKGROUND2_COLOR);
  ring_afreq->callback((Fl_Callback*)cb_ring_afreq, (void*)(2));
} // Fl_Check_Button* ring_afreq
{ ring_depth = new SliderW(51, 106, 100, 10, "Depth");
  ring_depth->type(5);
  ring_depth->box(FL_FLAT_BOX);
  ring_depth->color((Fl_Color)178);
  ring_depth->selection_color((Fl_Color)62);
  ring_depth->labeltype(FL_NORMAL_LABEL);
  ring_depth->labelfont(0);
  ring_depth->labelsize(10);
  ring_depth->labelcolor(FL_BACKGROUND2_COLOR);
  ring_depth->maximum(100);
  ring_depth->step(1);
  ring_depth->textcolor(FL_BACKGROUND2_COLOR);
  ring_depth->callback((Fl_Callback*)cb_ring_depth);
  ring_depth->align(Fl_Align(FL_ALIGN_LEFT));
  ring_depth->when(FL_WHEN_CHANGED);
} // SliderW* ring_depth
{ ring_freq = new SliderW(51, 118, 100, 10, "Freq");
  ring_freq->type(5);
  ring_freq->box(FL_FLAT_BOX);
  ring_freq->color((Fl_Color)178);
  ring_freq->selection_color((Fl_Color)62);
  ring_freq->labeltype(FL_NORMAL_LABEL);
  ring_freq->labelfont(0);
  ring_freq->labelsize(10);
  ring_freq->labelcolor(FL_BACKGROUND2_COLOR);
  ring_freq->minimum(1);
  ring_freq->maximum(20000);
  ring_freq->step(10);
  ring_freq->textcolor(FL_BACKGROUND2_COLOR);
  ring_freq->callback((Fl_Callback*)cb_ring_freq);
  ring_freq->align(Fl_Align(FL_ALIGN_LEFT));
  ring_freq->when(FL_WHEN_CHANGED);
} // SliderW* ring_freq
{ ring_sin = new SliderW(51, 130, 100, 10, "Sin");
  ring_sin->type(5);
  ring_sin->box(FL_FLAT_BOX);
  ring_sin->color((Fl_Color)178);
  ring_sin->selection_color((Fl_Color)62);
  ring_sin->labeltype(FL_NORMAL_LABEL);
  ring_sin->labelfont(0);
  ring_sin->labelsize(10);
  ring_sin->labelcolor(FL_BACKGROUND2_COLOR);
  ring_sin->maximum(100);
  ring_sin->step(1);
  ring_sin->textcolor(FL_BACKGROUND2_COLOR);
  ring_sin->callback((Fl_Callback*)cb_ring_sin);
  ring_sin->align(Fl_Align(FL_ALIGN_LEFT));
  ring_sin->when(FL_WHEN_CHANGED);
} // SliderW* ring_sin
{ ring_tri = new SliderW(51, 142, 100, 10, "Tri");
  ring_tri->type(5);
  ring_tri->box(FL_FLAT_BOX);
  ring_tri->color((Fl_Color)178);
  ring_tri->selection_color((Fl_Color)62);
  ring_tri->labeltype(FL_NORMAL_LABEL);
  ring_tri->labelfont(0);
  ring_tri->labelsize(10);
  ring_tri->labelcolor(FL_BACKGROUND2_COLOR);
  ring_tri->maximum(100);
  ring_tri->step(1);
  ring_tri->textcolor(FL_BACKGROUND2_COLOR);
  ring_tri->callback((Fl_Callback*)cb_ring_tri);
  ring_tri->align(Fl_Align(FL_ALIGN_LEFT));
  ring_tri->when(FL_WHEN_CHANGED);
} // SliderW* ring_tri
{ ring_saw = new SliderW(51, 154, 100, 10, "Saw");
  ring_saw->type(5);
  ring_saw->box(FL_FLAT_BOX);
  ring_saw->color((Fl_Color)178);
  ring_saw->selection_color((Fl_Color)62);
  ring_saw->labeltype(FL_NORMAL_LABEL);
  ring_saw->labelfont(0);
  ring_saw->labelsize(10);
  ring_saw->labelcolor(FL_BACKGROUND2_COLOR);
  ring_saw->maximum(100);
  ring_saw->step(1);
  ring_saw->textcolor(FL_BACKGROUND2_COLOR);
  ring_saw->callback((Fl_Callback*)cb_ring_saw);
  ring_saw->align(Fl_Align(FL_ALIGN_LEFT));
  ring_saw->when(FL_WHEN_CHANGED);
} // SliderW* ring_saw
{ ring_squ = new SliderW(51, 167, 100, 10, "Squ");
  ring_squ->type(5);
  ring_squ->box(FL_FLAT_BOX);
  ring_squ->color((Fl_Color)178);
  ring_squ->selection_color((Fl_Color)62);
  ring_squ->labeltype(FL_NORMAL_LABEL);
  ring_squ->labelfont(0);
  ring_squ->labelsize(10);
  ring_squ->labelcolor(FL_BACKGROUND2_COLOR);
  ring_squ->maximum(100);
  ring_squ->step(1);
  ring_squ->textcolor(FL_BACKGROUND2_COLOR);
  ring_squ->callback((Fl_Callback*)cb_ring_squ);
  ring_squ->align(Fl_Align(FL_ALIGN_LEFT));
  ring_squ->when(FL_WHEN_CHANGED);
} // SliderW* ring_squ
position(X, Y);
end();
}