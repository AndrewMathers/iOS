/****************************************************************************
 *                                                                           *
 *  Copyright (C) 2014-2015 iBuildApp, Inc. ( http://ibuildapp.com )         *
 *                                                                           *
 *  This file is part of iBuildApp.                                          *
 *                                                                           *
 *  This Source Code Form is subject to the terms of the iBuildApp License.  *
 *  You can obtain one at http://ibuildapp.com/license/                      *
 *                                                                           *
 ****************************************************************************/

#import <UIKit/UIKit.h>
#import "mCatalogueSearchBarView.h"
#import "mWebVC.h"

/**
 *  Customized WebVCViewController
 *
 *  @see mWebVCViewController
 */
@interface mExternalLinkWebViewController : mWebVCViewController

/**
 * Color of the navigation bar. Specified before the controller is pushed.
 */
@property (nonatomic, strong) UIColor *navBarColor;

@end
