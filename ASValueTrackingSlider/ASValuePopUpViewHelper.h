//
//  ASValuePopUpViewHelper.h
//  OneTwoTrip
//
//  Created by user1 on 06.03.15.
//  Copyright (c) 2015 OneTwoTrip. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ASValuePopUpViewHelper : NSObject

+ (UIBezierPath*)bezierPathWithIOS7RoundedRect: (CGRect)rect
                                  cornerRadius: (CGFloat)radius;

+ (UIBezierPath*)bezierPathWithIOS7RoundedRect: (CGRect)rect
                                  cornerRadius: (CGFloat)radius
                                    arrowWidth:(CGFloat)arrowWidth
                                 arrowPosition:(CGFloat)arrowPosition
                                   arrowHeight:(CGFloat)arrowHeight;

@end
