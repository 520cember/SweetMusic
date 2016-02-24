//
//  SeeCell.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SeeModel.h"

@interface SeeCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *seeImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (weak, nonatomic) IBOutlet UILabel *nicknameLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;

- (void)showDataWithModel:(SeeModel *)model;

@end
