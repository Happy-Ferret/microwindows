#include "nxlib.h"

int
XStoreName(Display *dpy, Window w, _Xconst char *name)
{
	GR_WM_PROPERTIES	props;

	props.flags = GR_WM_FLAGS_TITLE;
	props.title = (char *)name;
	GrSetWMProperties(w, &props);
	return 1;	// FIXME should return atom #
}

int
XSetIconName(Display *dpy, Window w, _Xconst char *icon_name)
{
#if DEBUG || SHOWSTUBS
	DPRINTF("XAllocNamedColor %s\n", icon_name);
#endif 
	return 0;
}
