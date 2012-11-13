//
//  ViewController.m
//  TableViewArrayDataSource
//
//  Created by Kataoka Naoyuki on 12/11/13.
//  Copyright (c) 2012年 Kataoka Naoyuki. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSArray *array = [NSArray arrayWithObjects:@"Apple", @"Banana", @"Orange", nil];
    TableViewArrayDataSource *dataSource = [[TableViewArrayDataSource alloc] initWithDataSourceArray:array];
    dataSource.delegate = self;
    
    tableView.delegate = self;
    tableView.dataSource = dataSource;
    
    
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath data:(id)data {
    
    UITableViewCell *cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"FruitCell"];
    cell.textLabel.text = (NSString *)data;
    return cell;
    
}

@end
