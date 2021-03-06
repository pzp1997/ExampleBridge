//
//  AppDelegate.h
//  ExampleBridge
//
//  Created by Alexey Kureev on 26/09/2016.
//  Copyright © 2016 oss. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ChakraProxy.h"
#import "EBWindow.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (nonatomic, retain) NSThread *jsvmThread;

- (void)renderElementOfType:(NSString *)name size:(NSSize)size;

@end

