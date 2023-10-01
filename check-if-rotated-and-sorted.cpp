/*
    Check if the given array is rotated and sorted
    input : arr[] = { 3,4,5,1,2,3}
    output : true 
*/

#include <iostream>

bool check ( int arr[] , int size )
{
    int count = 0 ;
    for( int i = 1 ; i < size ; i ++ )
    {
        if( arr[i-1] > arr[i] )
            count ++ ;
    }
    if( arr[size-1]  > arr[0] )
        count ++ ;

    return ( count == 1 ) ;
}

int main ()
{
    int arr[] = { 3,4,5,1,2,3} ;
    int size = sizeof( arr  ) / sizeof(arr[0] ) ;

   std :: cout <<  check( arr , size ) ;
}