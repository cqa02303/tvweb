//
//  TVWebViewController.h
//  TVWeb
//
//  Created by 藤川 宏之 on 08/12/03.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TVWebViewController : UIViewController <UIWebViewDelegate, UITextFieldDelegate> {
	IBOutlet UITextField *urlField;
	IBOutlet UIView		*tvView;
	IBOutlet UIWebView	*webView;
}

@property (nonatomic, retain) UIView *tvView;

- (void)openURL:(id)sender;

@end

