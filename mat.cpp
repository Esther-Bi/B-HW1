#include <iostream>
#include <string>
#include "mat.hpp"
using namespace std;

namespace ariel{
    void changeSymbol(char c1 , char c2 , char * current){
        if (c1 == *current){
            *current = c2;
        } else{
            *current = c1;
        }
    }

    string line(int row , int all_cols , char c1 , char c2){
        string line;
        char curr = c1;
        char last_of_first = c1;
        int col = 0;
        for (int i=0 ; i<=row && i*2<all_cols ; i++){
            line.push_back(curr);
            changeSymbol(c1,c2,&curr);
            last_of_first = curr;
        }
        for (int i=0 ; i<all_cols-(2*row)-1 ; i++){
            if (i==0){
                changeSymbol(c1,c2,&curr);
            }
            line.push_back(curr);
        }
        curr = last_of_first;
        for (int i=line.length() ; i<all_cols ; i++){
            line.push_back(curr);
            changeSymbol(c1,c2,&curr);
        }
        return line;
    }

    string mat(int col, int row, char c1, char c2){
        // missimg parameter
        if (col==0 || row==0 || c1=='\0' || c2=='\0'){
           throw std::domain_error( "missimg parameter!" );
        }
        // bad input
        if ( (col<1) || (row<1) || (col%2==0) || (row%2==0) ){
            throw std::domain_error( "bad input!" );
        }
        // unreal symbol
        const int low_let = 33;
        const int high_let=126;
        if ( c1<low_let || c2<low_let || c1>high_let || c2>high_let){
            throw std::domain_error( "unreal symbol!" );
        }
        string ans;
        int mid = row/2;
        ans.append(ariel::line(mid,col,c1,c2));
        ans.append("\n");
        for (int i=mid-1 ; i>=0 ; i--){
            string tmp = ariel::line(i,col,c1,c2);
            ans.insert(0,"\n");
            ans.insert(0,tmp);
            ans.append(tmp);
            ans.append("\n");
        }
        return ans;
    }   
}