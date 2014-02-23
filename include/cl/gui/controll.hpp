#ifndef __HPP_WNM_CL_GUI_CONTROLL__
#define __HPP_WNM_CL_GUI_CONTROLL__

#include <iostream>

namespace wnm {
namespace cl {
namespace gui {

    class controll
    {
        private:
        controll* m_parent;
        
        protected:
        void setParent(controll* ctrl);
    };

}}}

#endif
