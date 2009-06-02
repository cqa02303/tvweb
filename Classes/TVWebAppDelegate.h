//
//  TVWebAppDelegate.h
//  TVWeb
//
//  Created by 藤川 宏之 on 08/12/03.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TVWebViewController, MPTVOutWindow;

@interface TVWebAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TVWebViewController *viewController;
	MPTVOutWindow *tvWindow;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TVWebViewController *viewController;
@property (nonatomic, retain) IBOutlet MPTVOutWindow *tvWindow;

@end

