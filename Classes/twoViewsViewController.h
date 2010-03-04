//
//  twoViewsViewController.h
//  twoViews
//
//  Created by Turtle on 3/4/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface twoViewsViewController : UIViewController {

	IBOutlet SecondViewController *secondViewController;
	
}

-(IBAction)goToSecondView;
-(IBAction)goToThirdView;
@end

