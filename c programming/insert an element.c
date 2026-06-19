 #include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6},value=5,pos=2,size,i;
    size=((sizeof(array))/(sizeof(array[0])));
    printf("size=%d\n",size);
    printf("arrayy=");
    for(i=0;i<size;i++)
    {

         printf("%d ",array[i]);
    }

    printf("\n");
    for(i=size;i>pos;i--)
    {
        array[i]=array[i-1];

    }
    size++;
 array[pos]=value;

  for(i=0;i<size;i++)
  {
      printf("%d ",array[i]);
  }
return 0;


}
