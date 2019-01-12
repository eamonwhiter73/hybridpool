//
//  SecondViewController.h
//  HybridPool
//
//  Created by Eamon White on 1/7/19.
//  Copyright © 2019 Eamon White. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDVViewController.h"
#import "PoolsTableViewCell.h"

@interface PoolsTableViewController : CDVViewController {
    CGPoint* lastTouch;
}

@property (nonatomic,strong) NSMutableArray* pools;

@end

