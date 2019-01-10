//
//  PoolsList.m
//  
//
//  Created by Eamon White on 1/7/19.
//

#import "ListPlugin.h"
#import "SecondViewController.h"
#import "PoolsTableViewController.h"

@implementation ListPlugin
-(void)addItem:(CDVInvokedUrlCommand*) command {
    NSString* item = [command.arguments objectAtIndex:0];
    
    if(item) {
        NSLog(@"addItem %@", item);
        SecondViewController* svc = (SecondViewController*)[self viewController];
        PoolsTableViewController* ptvc = (PoolsTableViewController*)svc.tabBarController.viewControllers[0];
        [ptvc.items addObject:item];
        [ptvc.tableView reloadData];
        
        CDVPluginResult* pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK];
        [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
    } else {
        CDVPluginResult* pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_ERROR];
        [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
    }
}

@end
