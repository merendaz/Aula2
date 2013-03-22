//
//  SerVivo.h
//  Aula2_Protocolo
//
//  Created by everaldo bechara on 21/03/13.
//  Copyright (c) 2013 iLearn Educacao e Informatica Ltda. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SerVivo <NSObject>
- (void) nasce;
- (void) cresce;
- (id <SerVivo>) reproduz;
- (void) morre;
@end
