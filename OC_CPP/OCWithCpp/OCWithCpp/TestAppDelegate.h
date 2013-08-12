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

// make sure the extension of TestAppDelegate.mm is ".mm"
// or class keyword can not be recognized.
class CppClass;

@interface TestAppDelegate : NSObject <NSApplicationDelegate>
{
@private
    CppClass* obj;
    int counter;
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSTextFieldCell *textField;

- (IBAction)onClickShowBtn:(id)sender;
- (IBAction)onClearClicked:(id)sender;

- (NSString*) cppAdapterFunction;

@end
