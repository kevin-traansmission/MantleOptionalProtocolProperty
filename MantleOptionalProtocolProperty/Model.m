//
//  Model.m
//  MantleOptionalProtocolProperty
//
//  Created by Traansmission on 5/21/15.
//  Copyright (c) 2015 Traansmission. All rights reserved.
//

#import "Model.h"

@implementation Model

@synthesize requiredNumber = _requiredNumber;
@synthesize requiredString = _requiredString;

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{ @"requiredNumber"  : @"number",
              @"requiredString"  : @"string" };
}

@end
