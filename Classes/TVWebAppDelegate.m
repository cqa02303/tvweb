//
//  TVWebAppDelegate.m
//  TVWeb
//
//  Created by 藤川 宏之 on 08/12/03.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import "TVWebAppDelegate.h"
#import "TVWebViewController.h"
#import "MPTVOutWindow.h"
#import "TVOutApp.h"

@interface MPTVOutWindow (Hack)
- (NPTVOutBackgroundView*)_backgroundView;
@end

@implementation MPTVOutWindow (Hack)
- (NPTVOutBackgroundView*)_backgroundView {
	return _backgroundView;
}
@end

@implementation TVWebAppDelegate

@synthesize window;
@synthesize viewController;
@synthesize tvWindow;

- (void)dealloc {
	[tvWindow release];
    [viewController release];
    [window release];
    [super dealloc];
}


- (void)applicationDidFinishLaunching:(UIApplication *)application {
	TVOutApp *app = (TVOutApp*)[UIApplication sharedApplication];
	app.proximitySensingEnabled = YES;
	// [app setStatusBarCustomText:@"test text"];
	// [app removeStatusBarCustomText];
	[app setStatusBarShowsProgress:YES];
	[app vibrateForDuration:2];
	
    // Override point for customization after app launch
    [window addSubview:viewController.view];
	//
	MPVideoView *dummy = [[MPVideoView alloc] initWithFrame:CGRectMake(0.0f, 0.0f, 640.0f, 480.0f)];
    [window makeKeyAndVisible];
	self.tvWindow = [[MPTVOutWindow alloc] initWithVideoView:dummy];
	[self.tvWindow._backgroundView addSubview:viewController.tvView];
	[self.tvWindow makeKeyAndVisible];
	[window becomeKeyWindow];
}

@end
