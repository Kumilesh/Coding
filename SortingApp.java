class SortingApp
{
    public static void main(String[] args)
    {
        int maxSize=100000;
        Array arr;
        arr=new Array(maxSize);
        arr.randomInit(maxSize);
        arr.printArr();
    }
}
// class Array
// {
//     int[]  arr;
//     int maxSize;
//     public Array(int maxSize){
//         this.maxSize=maxSize;
//         this.arr=new int[maxSize];
//     }
//     public void randomInit(int maxSize)
//     {
//         int min=0;
//         int max=100000;
//         for(int i=0;i<maxSize;i++)
//         {
//             arr[i]=(int)(Math.random()*(max-min+1))+min;
//             //System.out.println(Math.random());
//         }
//     }
//     public void printArr()
//     {
//         for(int i=0;i<20;i++)
//         {
//             System.out.println(arr[i]);
//         }
//     }
//     // public static void main(String[] args)
//     // {
//     //     int maxSize=100000;
//     //     Array arr;
//     //     arr=new Array(maxSize);
//     //     arr.randomInit(maxSize);
//     //     arr.printArr();
//     // }
// }