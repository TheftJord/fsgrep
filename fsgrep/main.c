/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on February 25, 2024, 9:29 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "fsgrep.h"

/*
 * 
 */
int main(int argc, char** argv) {
    //values
    const char* keyword=argv[1];
    const char* file=argv[2];
    
    FILE *open=fopen(file,"r");
    if(open==NULL){
        fprintf(stderr,"%s HAS RETURNED A NULL VALUE",file);
    }
    else{
        fsgrep(keyword,file);
        fclose(open);
    }
    return (EXIT_SUCCESS);
}

