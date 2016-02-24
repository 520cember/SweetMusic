//
//  ListCell.m
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "ListCell.h"


@implementation ListCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)showDataWithModel:(SongModel *)model Index:(NSInteger)index{
    self.numLabel.text = [NSString stringWithFormat:@"%ld",index+1];
    self.songerLabel.text = model.songer;
    self.songnameLabel.text = model.songname;
}

@end
