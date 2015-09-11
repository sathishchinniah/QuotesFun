//
//  ColorWheel.h
//  FunFacts
//
//  Created by Sathish Chinniah on 11/09/15.
//  Copyright (c) 2015 Sathish Chinniah. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
