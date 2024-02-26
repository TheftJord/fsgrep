/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file_header.c to edit this template
 */

/* 
 * File:   fsgrep.c
 * Author: student
 * 
 * Created on February 25, 2024, 9:33 PM
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @param keyword
 * @param file
 */
void fsgrep(const char* keyword, const char* file){
    //values
    char size[1024];
    
    FILE *open=fopen(file,"r");
    if(open==NULL){
        fprintf(stderr,"%s HAS RETURNED NULL",file);
        exit(1);
    }
    printf("\n");
    while(fgets(size, sizeof(size), open)){
        if(strstr(size,keyword)!=NULL){
            printf("\n---------WORD FOUND---------\n");
            printf("%s",size);
        }
        else{
            continue;
        }
    }
    fclose(open);
    printf("\n---------OBJECTIVE COMPLETED SUCESSFULLY---------\n");
}