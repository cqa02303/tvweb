//
//  TVOutApp.m
//  TVWeb
//
//  Created by 藤川 宏之 on 08/12/04.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import "TVOutApp.h"


@implementation TVOutApp

- (void)applicationWillSuspend {
	NSLog(@"applicationWillSuspend");
	[super applicationWillSuspend];
}

- (void)applicationWillSuspendForEvemtsOnly {
	NSLog(@"applicationWillSuspendForEvemtsOnly");
	[super applicationWillSuspendForEvemtsOnly];
}

- (void)applicationWillSuspendUnderLock {
	NSLog(@"applicationWillSuspendUnderLock");
	[super applicationWillSuspendUnderLock];
}

- (void)didTurnOnDisplay {
	NSLog(@"didTurnOnDisplay");
	[super didTurnOnDisplay];
}

// proximitySensingでは反応しない
- (void)didTurnOffDisplay {
	NSLog(@"didTurnOffDisplay");
	[super didTurnOffDisplay];
}

- (void)_updateDefaultImage {
	NSLog(@"_updateDefaultImage");
	[super _updateDefaultImage];
}

- (void)setStatusBarCustomText:(NSString*)str {
	[super setStatusBarCustomText:str];
}

@end
