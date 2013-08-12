//
//  TestAppDelegate.m
//  OCWithCpp
//
//  Created by Leon He on 8/12/13.
//  Copyright (c) 2013 Leon. All rights reserved.
//

#import "TestAppDelegate.h"

@implementation TestAppDelegate

@synthesize textField;
//@synthesize data=_data;

-(id) init {
    if(self = [super init]){
        obj = new CppClass();
    }
    return self;
}

- (void)dealloc
{
    delete obj;
    [super dealloc];
}

- (NSString*) cppAdapterFunction
{
    if(NULL == obj) {
        obj = new CppClass();
    }
    obj->setIntValue(counter++);
    std::string tmp = obj->function();
    return [NSString stringWithUTF8String:tmp.c_str()];
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
}

- (IBAction)onClickShowBtn:(id)sender {
    NSString* str = [self cppAdapterFunction];
    [textField setStringValue:str];
}
- (IBAction)onClearClicked:(id)sender {

    obj->setIntValue(counter = 0);
    [textField setStringValue:@"String cleared."];
}

@end
