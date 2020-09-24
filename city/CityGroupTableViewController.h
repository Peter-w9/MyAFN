//
//  CityGroupTableViewController.h
//  MyFirstiOSApp
//
//  Created by hs on 2020/9/15.
//  Copyright © 2020 hs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CityGroup.h"
NS_ASSUME_NONNULL_BEGIN
// MyBlock不是变量名,而是这种类型的block的别名
typedef void(^MyBlock)(NSString *cityName);
@interface CityGroupTableViewController : UITableViewController
//block传值
@property(nonatomic,copy)MyBlock block;
@end

NS_ASSUME_NONNULL_END
