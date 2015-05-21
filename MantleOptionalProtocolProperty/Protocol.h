//
//  Protocol.h
//  MantleOptionalProtocolProperty
//
//  Created by Traansmission on 5/21/15.
//  Copyright (c) 2015 Traansmission. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Protocol <NSObject>

@required
@property (nonatomic) NSNumber *requiredNumber;
@property (nonatomic) NSString *requiredString;

@optional
@property (nonatomic) NSString *optionalString;

@end
