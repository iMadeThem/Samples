//
//  TestAppDelegate.h
//  OCWithCpp
//
//  Created by Leon He on 8/12/13.
//  Copyright (c) 2013 Leon. All rights reserved.
//

#import <Cocoa/Cocoa.h>
//#import <Foundation/Foundation.h>
#include "CppClass.h"

class CppClass;

@interface TestAppDelegate : NSObject <NSApplicationDelegate>
{
@private
    CppClass* obj;
//    NSString* _data;
    int counter;
}

@property (assign) IBOutlet NSWindow *window;
- (IBAction)onClickShowBtn:(id)sender;
@property (assign) IBOutlet NSTextFieldCell *textField;
- (IBAction)onClearClicked:(id)sender;

//@property (assign) NSString* data;

- (NSString*) cppAdapterFunction;

@end
