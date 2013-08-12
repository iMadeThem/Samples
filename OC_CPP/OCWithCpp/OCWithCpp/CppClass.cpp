//
//  CppClass.cpp
//  OCWithCpp
//
//  Created by Leon He on 8/12/13.
//  Copyright (c) 2013 Leon. All rights reserved.
//

#include "CppClass.h"
#include <sstream>

CppClass::CppClass() : m_intvalue(0)
{
    std::cout << "CppClass::CppClass()" << std::endl;
    function();
}

CppClass::~CppClass()
{
    std::cout << "CppClass::~CppClass()" << std::endl;
}

std::string CppClass::function()
{
    std::ostringstream out;
    out << "CppClass::function() returns: " << m_intvalue << std::endl << std::flush;
    return out.str();
}