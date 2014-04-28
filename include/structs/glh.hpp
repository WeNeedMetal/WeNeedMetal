#ifndef _HPP_WNM_GLH_
#define _HPP_WNM_GLH_

#include <gl/GL.h>

namespace WeNeedMetal {
	class GL {
		static inline void Viewport(int x, int y, int width, int height) {
			glViewport(x, y, width, height);
		}
	};
}

#endif