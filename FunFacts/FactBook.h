//
//  FactBook.h
//  FunFacts
//
//  Created by Sathish Chinniah on 11/09/15.
//  Copyright (c) 2015 Sathish Chinniah. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
