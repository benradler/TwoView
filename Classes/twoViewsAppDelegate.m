//
//  twoViewsAppDelegate.m
//  twoViews
//
//  Created by Turtle on 3/4/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "twoViewsAppDelegate.h"
#import "twoViewsViewController.h"

@implementation twoViewsAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
