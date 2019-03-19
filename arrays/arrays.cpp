//Array Operations
//Traverse
//Insertion
//Deletion
//Sort
//Binary Search
//Update

#include <iostream>
#include <cstdlib>
using namespace std;

//function declarations
int rand();
void traverse(int array[],int len);
int * insert(int * array ,int newitem,int pos,int *len, int *size);
int * remove(int * array,int pos,int *len, int *size);
int * sort(int * array,int start,int end,int len);
int * slice(int * array,int start,int end);

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
  int *array = new int[*size];

  for(int i = 0; i<*size; i++)
  {

    array[i] = rand()%25;

  }

  cout << "\n";
  traverse(array,*len);
  cout << "\n";
  int * array2 = slice(array,0,5);
  traverse(array2,6);
  delete [] array2;
  array = insert(array,10,5,len,size);
  cout << "\n";
  traverse(array,*len);
  array = remove(array,5,len,size);
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

//insert element to a specific position
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

  delete [] array;
  return newarray;

}

//delete a specific element
int * remove(int * array,int pos,int *len, int *size)
{

  //if array is < half full make it half the size
  if(*len < (*size) / 2)
  {

    *size = (*size)*2;

  }

  //initialize new array to delete item
  int *newarray = new int[*size];

  // loop through and populate the new array with the old array data
  for(int i=0; i < *len; i++)
  {


    if(i<pos)//fill all less than than new item pos
    {

      newarray[i] = array[i];

    }
    else if (i > pos) // fill all over new item position
    {

      newarray[i-1] = array[i];

    }


  }

  //subtract one on to length because we are deleting
  *len = *len - 1;

  delete [] array;
  return newarray;

}



void mergesort(int * array,int start,int end)
{

  if(start < end)
  {

    int middle = (end + start)/2;

    mergesort(array,start,middle);
    mergesort(array,middle+1,end);
    merge(array,start,middle,end);

  }

  int * merge(int * array, start, middle, end)
  {

    for(int i = start; i<middle; i++)
    {

      for(int j = middle; j<= end)
      {

        if()

      }

    }

  }


}

int * slice(int * array,int start,int end)
{

  int count = 0;
  int * newarray = new int[((end - start)+1)];

  for(int i = start; i <= end; i++)
  {

    newarray[count] = array[i];
    count++;

  }

  return newarray;

}
