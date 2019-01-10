//
//  MyTableViewController.h
//  HybridIOSApp
//
//  Created by Holly Schinsky on 6/25/15.
//
//

#import <UIKit/UIKit.h>
#import "PoolsTableViewCell.h"

@interface PoolsTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic,strong) NSMutableArray* items;

@end
