//
//  PoolsList.h
//  
//
//  Created by Eamon White on 1/7/19.
//

#import "CDVPlugin.h"
#import "PoolTableViewController.h"
#import "PoolsTableViewController.h"

@interface ListPlugin : CDVPlugin
    - (void)addPools:(CDVInvokedUrlCommand*) command;
    - (void)getCurrentTabControllerName:(CDVInvokedUrlCommand*) command;
@end
