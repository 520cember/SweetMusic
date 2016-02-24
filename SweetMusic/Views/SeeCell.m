//
//  SeeCell.m
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "SeeCell.h"

@implementation SeeCell

- (void)awakeFromNib {
    self.nameLabel.layer.masksToBounds = YES;
}

- (void)showDataWithModel:(SeeModel *)model{
    [self.seeImageView sd_setImageWithURL:[NSURL URLWithString:model.image] placeholderImage:[UIImage imageNamed:@"zhanwei"]];
    self.nameLabel.text = model.name;
    self.nicknameLabel.text = model.nickname;
    self.titleLabel.text = model.title;
}

@end
