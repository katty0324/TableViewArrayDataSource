//
//  TableVieArrayDataSourceDelegate.h
//  TableViewArrayDataSource
//
//  Created by Kataoka Naoyuki on 12/11/13.
//  Copyright (c) 2012年 Kataoka Naoyuki. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TableVieArrayDataSourceDelegate <NSObject>

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath data:(id)data;

@end
