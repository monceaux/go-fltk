#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct Fl_Help_View Fl_Help_View;

	extern Fl_Help_View *go_fltk_new_HelpView(int x, int y, int w, int h, const char *text);
	extern void          go_fltk_HelpView_load(Fl_Help_View *h, const char *f);
	extern const char   *go_fltk_HelpView_directory(Fl_Help_View *h);
	extern const char   *go_fltk_HelpView_filename(Fl_Help_View *h);
	extern int           go_fltk_HelpView_find(Fl_Help_View *h, const char *s, int p);
	extern int           go_fltk_HelpView_leftline(Fl_Help_View *h);
	extern void          go_fltk_HelpView_set_leftline(Fl_Help_View *h, int i);
	extern int           go_fltk_HelpView_topline(Fl_Help_View *h);
	extern void          go_fltk_HelpView_set_topline(Fl_Help_View *h, int i);
	extern void          go_fltk_HelpView_set_toplinestring(Fl_Help_View *h, const char *s);

#ifdef __cplusplus
}
#endif
