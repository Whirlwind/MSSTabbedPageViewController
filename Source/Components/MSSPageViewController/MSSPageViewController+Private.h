//
//  MSSPageViewControllerPrivate.h
//  Paged Tabs Example
//
//  Created by Merrick Sapsford on 28/03/2016.
//  Copyright © 2016 Merrick Sapsford. All rights reserved.
//

#import "MSSPageViewController.h"

@interface MSSPageViewController ()

/**
 The default page index of the page view controller.
 */
@property (nonatomic, assign, readonly) NSInteger defaultPageIndex;

- (void)setUpViewController:(nonnull UIViewController *)viewController
                      index:(NSInteger)index;

@end
