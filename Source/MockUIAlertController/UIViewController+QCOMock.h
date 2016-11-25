//  MockUIAlertController by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2015 Jonathan M. Reid. See LICENSE.txt

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const QCOMockViewControllerAnimatedKey;


@interface UIViewController (QCOMock)

+ (void)qcoMock_swizzle;

@end

NS_ASSUME_NONNULL_END
