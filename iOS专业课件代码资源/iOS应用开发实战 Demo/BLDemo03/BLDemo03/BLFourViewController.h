//
//  BLFourViewController.h
//  BLDemo03
//
//  Created by derek on 6/28/15.
//  Copyright (c) 2015 derek. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLBaseViewController.h"

@interface BLFourViewController : BLBaseViewController<UIWebViewDelegate>
{
    UIWebView                   *_webView;
    UIActivityIndicatorView     *_activityView;
}

@end
