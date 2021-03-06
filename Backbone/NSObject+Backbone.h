//
//  NSObject+Backbone.h
//  Backbone
//
//  Created by Edmond Leung on 7/21/12.
//  Copyright (c) 2012. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Backbone)

- (id)performSelector:(SEL)selector withObjects:(NSArray *)objects;

@end
