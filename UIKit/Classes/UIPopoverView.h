//  Created by Sean Heber on 10/12/10.
#import "UIView.h"

@class UIImageView;

@interface UIPopoverView : UIView {
	UIImageView *_backgroundView;
	UIImageView *_arrowView;
	UIView *_contentView;
	UIView *_contentContainerView;
}

- (id)initWithContentView:(UIView *)aView size:(CGSize)aSize;

- (void)pointTo:(CGPoint)point inView:(UIView *)view;

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, assign) CGSize contentSize;

@end
