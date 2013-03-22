//
//  Pessoa.h
//  Aula2_Protocolo
//
//  Created by everaldo bechara on 21/03/13.
//  Copyright (c) 2013 iLearn Educacao e Informatica Ltda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SerVivo.h"
@interface Pessoa : NSObject <SerVivo> {
    id <SerVivo> filho;
}

@end
