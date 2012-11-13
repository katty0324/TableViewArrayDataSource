//
//  TableViewArrayDataSource.h
//  TableViewArrayDataSource
//
//  Created by Kataoka Naoyuki on 12/11/13.
//  Copyright (c) 2012年 Kataoka Naoyuki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TableVieArrayDataSourceDelegate.h"

@interface TableViewArrayDataSource : NSObject <UITableViewDataSource> {
 
    NSArray *dataSourceArray;
    id <TableVieArrayDataSourceDelegate> delegate;
    
}

@property (nonatomic, retain) NSArray *dataSourceArray;
@property (nonatomic, assign) id <TableVieArrayDataSourceDelegate> delegate;

- (id)initWithDataSourceArray:(NSArray *)array;

@end
