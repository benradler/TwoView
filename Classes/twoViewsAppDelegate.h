//
//  twoViewsAppDelegate.h
//  twoViews
//
//  Created by Turtle on 3/4/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class twoViewsViewController;

@interface twoViewsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    twoViewsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet twoViewsViewController *viewController;

@end

