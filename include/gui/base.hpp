#ifndef __HPP_WNM_GUI_BASE__
#define __HPP_WNM_GUI_BASE__

#include <iostream>

namespace WeNeedMetal { namespace gui
{

    class Controll
    {

    protected:
        
        void setParent(Controll* ctrl);
        Controll* getParent();
        
        
        Controll* m_parent;
    };

}}

#endif
