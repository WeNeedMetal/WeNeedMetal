#ifndef _HPP_WNM_GLH_
#define _HPP_WNM_GLH_

#include <gl/GL.h>

#include "matrix.hpp"

namespace WeNeedMetal {
	namespace GL {
		inline void Viewport(int x, int y, int width, int height) {
			glViewport(x, y, width, height);
		}

		inline void LoadIdentity() {
			glLoadIdentity();
		}

		inline void Translate(double x, double y, double z) {
			glTranslated(x, y, z);
		}

		inline void Translate(float x, float y, float z) {
			glTranslatef(x, y, z);
		}

		inline void Scale(double x, double y, double z) {
			glScaled(x, y, z);
		}

		inline void Scale(float x, float y, float z) {
			glScalef(x, y, z);
		}

		inline void LoadMatrix(mat4<double> matrix) {
			glLoadMatrixd(matrix.Ptr());
		}
	};
}

#endif