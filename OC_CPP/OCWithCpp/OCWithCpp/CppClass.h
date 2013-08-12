//
//  CppClass.h
//  OCWithCpp
//
//  Created by Leon He on 8/12/13.
//  Copyright (c) 2013 Leon. All rights reserved.
//

#ifndef OCWithCpp_CppClass_h
#define OCWithCpp_CppClass_h

#ifdef __cplusplus

#include <iostream>
#include <string>

class CppClass {
public:
    CppClass();
    virtual ~CppClass();
    std::string function();
    void setIntValue(int i){
        m_intvalue = i;
    }
private:
    int m_intvalue;
};

#endif

#endif
