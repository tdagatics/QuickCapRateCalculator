//
//  ViewController.h
//  QuickCapRateCalculator
//
//  Created by Anthony Dagati on 10/5/14.
//  Copyright (c) 2014 Black Rail Capital. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UILabel *capRateLabel;


- (IBAction)capRateButton:(id)sender;
- (IBAction)valuationButton:(id)sender;

@end
