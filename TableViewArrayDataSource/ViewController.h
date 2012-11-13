//
//  ViewController.h
//  TableViewArrayDataSource
//
//  Created by Kataoka Naoyuki on 12/11/13.
//  Copyright (c) 2012年 Kataoka Naoyuki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewArrayDataSource.h"

@interface ViewController : UIViewController <UITableViewDelegate, TableViewArrayDataSourceDelegate>{
    
    IBOutlet UITableView *tableView;
    
}

@end
