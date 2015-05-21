//
//  DetailViewController.h
//  MantleOptionalProtocolProperty
//
//  Created by Traansmission on 5/21/15.
//  Copyright (c) 2015 Traansmission. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

