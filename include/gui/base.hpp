#ifndef _HPP_WNM_GUI_BASE_
#define _HPP_WNM_GUI_BASE_

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
