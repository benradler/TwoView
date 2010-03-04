//
//  SecondViewController.h
//  twoViews
//
//  Created by Turtle on 3/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThirdViewController.h"

@interface SecondViewController : UIViewController {

	IBOutlet ThirdViewController *thirdViewController;
	
}

-(IBAction)goToThirdView;
-(IBAction)goBack;

@end
