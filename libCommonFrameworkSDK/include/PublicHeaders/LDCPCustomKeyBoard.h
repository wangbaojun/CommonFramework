//
//  LDCPCustomKeyBoard.h
//  NeteaseLottery
//
//  Created by SongLi on 10/18/14.
//  Copyright (c) 2014 netease. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LDCPCustomKeyBoard : UIView

/**
 *  为Input控件设置CustomKeyBoard(确定按钮相当于系统return按钮)
 *
 *  @param inputView 可以是UITextField、UITextView等
 *
 *  @returns 若inputView不被支持设置CustomKeyBoard则返回空
 */
+ (LDCPCustomKeyBoard *)setCustomKeyBoardForInputView:(UIView *)inputView;

/**
 *  恢复Input控件原本KeyBoard
 *
 *  @param inputView 可以是UITextField、UITextView等
 *
 *  @returns 若成功返回YES
 */
+ (BOOL)restoreKeyBoardForInputView:(UIView *)inputView;

@end
