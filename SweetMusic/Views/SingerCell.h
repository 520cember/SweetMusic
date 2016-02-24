//
//  SingerCell.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SingerModel.h"

@interface SingerCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *singerImageView;
@property (weak, nonatomic) IBOutlet UILabel *songnameLabel;
@property (weak, nonatomic) IBOutlet UIView *lineView;

@property (weak, nonatomic) IBOutlet UILabel *bfnumLabel;

- (void)showDataWithModel:(SingerModel *)model;

@end
