//
//  BrowserIDController+AppKit.h
//  TouchWiki
//
//  Created by Jens Alfke on 1/9/13.
//  Copyright (c) 2013 Couchbase. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "BrowserIDController.h"

@interface BrowserIDController (AppKit)

@property (nonatomic,readonly) NSViewController* viewController;
@property (nonatomic,readonly) NSPanel* panel;

@end
