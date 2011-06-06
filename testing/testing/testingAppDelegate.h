//
//  testingAppDelegate.h
//  testing
//
//  Created by newsint on 06/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testingViewController;

@interface testingAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet testingViewController *viewController;

@end
