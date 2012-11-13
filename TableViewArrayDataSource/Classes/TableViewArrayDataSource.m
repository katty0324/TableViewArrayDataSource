//
//  TableViewArrayDataSource.m
//  TableViewArrayDataSource
//
//  Created by Kataoka Naoyuki on 12/11/13.
//  Copyright (c) 2012年 Kataoka Naoyuki. All rights reserved.
//

#import "TableViewArrayDataSource.h"

@implementation TableViewArrayDataSource

@synthesize dataSourceArray;
@synthesize delegate;

- (id)initWithDataSourceArray:(NSArray *)array
{
    self = [super init];
    if (self) {
        self.dataSourceArray = array;
    }
    return self;
}

- (id)initWithDataSourceArray:(NSArray *)array tableView:(UITableView *)tableView delegate:(id <TableViewArrayDataSourceDelegate>)dataSourceDelegate
{
    self = [super init];
    if (self) {
        self.dataSourceArray = array;
        self.delegate = dataSourceDelegate;
        tableView.dataSource = self;
    }
    return self;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    return [delegate tableView:tableView cellForRowAtIndexPath:indexPath data:[dataSourceArray objectAtIndex:indexPath.row]];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [dataSourceArray count];
}

@end
