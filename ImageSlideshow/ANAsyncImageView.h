//
//  ANAsyncImageView.h
//  ImageSlideshow
//
//  Created by Alex Nichol on 1/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ANAsyncImageView : UIView {
    UIActivityIndicatorView * activityIndicator;
    UIImage * image;
    
    NSThread * backgroundThread;
    CGImageRef imageRef;
}

@property (nonatomic, strong) UIImage * image;

- (id)initWithFrame:(CGRect)frame;

- (void)loadImageURL:(NSURL *)aURL;
- (void)cancelLoading;

@end
