//
//  ViewController.h
//  EditTableDemo
//
//  Created by alok patil on 06/07/13.
//  Copyright (c) 2013 Hiteshi . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property (strong, nonatomic) IBOutlet UITableView *objTable;

@end
