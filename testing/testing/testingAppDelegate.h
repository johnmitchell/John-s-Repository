//
//  testingAppDelegate.h
//  testing
//
//  Created by johnmitchell on 06/06/2011.
//  Changed some more words.
//  Added even more words.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testingViewController;

@interface testingAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet testingViewController *viewController;

@end
