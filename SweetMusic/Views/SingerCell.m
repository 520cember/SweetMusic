//
//  SingerCell.m
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "SingerCell.h"

@implementation SingerCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
}



- (void)showDataWithModel:(SingerModel *)model{
    [self.singerImageView sd_setImageWithURL:[NSURL URLWithString:model.image] placeholderImage:[UIImage imageNamed:@"zhanwei"]];
    self.songnameLabel.text = [NSString stringWithFormat:@"   %@",model.songname];
    self.bfnumLabel.text = [NSString stringWithFormat:@"%ld",model.bfnum];
}

@end
