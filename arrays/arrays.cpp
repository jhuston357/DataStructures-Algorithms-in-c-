//Array Operations
//Traverse
//Insertion
//Deletion
//Search
//Update

#include <iostream>
using namespace std;

//function declarations
void traverse(int array[],int len);
int * insert(int array[],int newitem,int pos,int *len, int *size);


//main
int main()
{

  //number of array elements
  int * len = new int;
  *len = 8;

  //array size
  int *size = new int;
  *size = 8;

  //initialize array
  int poparray[] = {2,8,4,17,11,12,1,8};
  int *array;
  array = poparray;

  traverse(array,*len);
  array = insert(array,10,5,len,size);
  cout << "\n";
  traverse(array,*len);

  return 0;

}

//functions

//traverse an array
void traverse(int array[],int len)
{

  //traverse Array
  for(int i=0; i<len; i++)
  {

    cout << "Array[" << i << "] = " << array[i] << " !\n";

  }

}

int * insert(int * array,int newitem,int pos,int *len, int *size)
{

  //if array is full double the size
  if(*len == *size)
  {

    *size = (*size)*2;

  }

  //add one on to length because we are inserting
  *len = *len + 1;

  //initialize new array to insert new item
  int *newarray = new int[*size];

  //insert new item because we know the position
  newarray[pos] = newitem;

  // loop through and populate the new array with the old array data
  for(int i=0; i < *len; i++)
  {


    if(i<pos)//fill all less than than new item pos
    {

      newarray[i] = array[i];

    }
    else if (i > pos) // fill all over new item position
    {

      newarray[i] = array[i-1];

    }


  }

  return newarray;

}
