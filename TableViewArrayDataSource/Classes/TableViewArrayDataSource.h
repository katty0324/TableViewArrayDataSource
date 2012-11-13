//
//  TableViewArrayDataSource.h
//  TableViewArrayDataSource
//
//  Created by Kataoka Naoyuki on 12/11/13.
//  Copyright (c) 2012年 Kataoka Naoyuki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TableViewArrayDataSourceDelegate.h"

@interface TableViewArrayDataSource : NSObject <UITableViewDataSource> {
 
    NSArray *dataSourceArray;
    id <TableViewArrayDataSourceDelegate> delegate;
    
}

@property (nonatomic, retain) NSArray *dataSourceArray;
@property (nonatomic, assign) id <TableViewArrayDataSourceDelegate> delegate;

- (id)initWithDataSourceArray:(NSArray *)array;
- (id)initWithDataSourceArray:(NSArray *)array tableView:(UITableView *)tableView delegate:(id <TableViewArrayDataSourceDelegate>)dataSourceDelegate;

@end
