//
//  MainViewController.h
//  __                        ___                                       
// /\ \                      /\_ \                                      
// \ \ \___      __     _____\//\ \     ___    ___ ___      __          
//  \ \  _ `\  /'__`\  /\ '__`\\ \ \   / __`\/' __` __`\  /'__`\        
//   \ \ \ \ \/\ \L\.\_\ \ \L\ \\_\ \_/\ \L\ \\ \/\ \/\ \/\  __/        
//    \ \_\ \_\ \__/.\_\\ \ ,__//\____\ \____/ \_\ \_\ \_\ \____\       
//     \/_/\/_/\/__/\/_/ \ \ \/ \/____/\/___/ \/_/\/_/\/_/\/____/       
//                        \ \_\                                         
//                         \/_/
// haplome
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//  Created by Todd Treece on 2/18/10.
//  Copyright 2010 Todd Treece. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController  {
	NSString * backColor;
	NSString * highlightColor;
}
@property (nonatomic,retain) NSString * backColor;
@property (nonatomic,retain) NSString * highlightColor;
- (void)lightOn:(int)rowVal withCol:(int)colVal;
- (void)lightOff:(int)rowVal withCol:(int)colVal;
- (void)setLedState:(BOOL)state atRow:(int)rowVal atCol:(int)colVal;
@end
