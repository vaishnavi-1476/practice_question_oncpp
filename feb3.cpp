// #include<iostream>
// #include<algorithm>
// using namespace std;
 
// int main()
// {
//     srand(time(0));
//     int arr[2][2];
//     int et[4][4];
// int sum=0;
// float avg=0;
 
// int rand_n=rand()%8+1;
// float aij[rand_n];
// float min=0;
// float max=0;
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
           
//             aij[rand_n]=arr[i][j];
//             for(int k=0;k<rand_n;k++){
//                 //int rand_f=rand()%10+0;
//                 float rand_f=0+(float)rand()/RAND_MAX*(10+0);
//                 aij[k]=rand_f;
//                 min=aij[0];
//                 sum=sum+aij[k];
//                 avg=(float)sum/rand_n;
//                 if(aij[k]>max){
//                     max=aij[k];
//                 }
//                 if(min>aij[k]){
//                     min=aij[k];
//                 }
               
//                 cout<<aij[k]<<"  ";
 
//             }cout<<endl;
//                 for(int u=0;u<4;u++){
//                     int p{0};
//                     et[u][p]=sum;
//                     et[u][p++]=avg;
//                     et[u][p++]=min;
//                     et[u][p++]=max;
                   
//                 }
 
//                 for(int u=0;u<4;u++){
//                     for(int p=0;p<4;p++){
//                         et[u][p];
//                     }cout<<endl;
//                 }
//          //cout<<"sum is "<<sum<<" "<<"avg is "<<avg<<" "<<"max is "<<max<<" "<<"min "<<min<<" "<<endl<<endl;
//         }
        
//     }
    
//     return 0;
// }


#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int ogrid[10][10];
    float second_grid[10][3];
    int k=rand()%8+1;  
  
    float temp_array[k];
    float max=0;
    float min=0;
    int  sum=0;
    float avg=0;
 
    
    for (int i=0 ;i<2;i++)
    {
        for (int j=0 ; j<2;j++)
        {
           
               
         temp_array[k]=ogrid[i][j];
            for (int p=0;p<k;p++)
            {
              float m=(float)rand()/RAND_MAX*10;
                temp_array[p]=m;
               min= temp_array[0];
 
                // cout<<temp_array[k]<<"  ";
                sum+=temp_array[p];
                avg=sum/k;
                if (max<temp_array[p])
                {
                    max=temp_array[p];
                }
                if (temp_array[p]<min)
                {
                    min=temp_array[p];
                }
                    
                second_grid[i+j][0]=max;
                second_grid[i+j][1]=min;
                second_grid[i+j][2]=avg;
        
                 for (int i=0;i <10;i++)
             {
            cout<<"maximum = "<<second_grid[i][0]<<"  ";
            cout<<"minimum = "<<second_grid[i][1]<<"  ";
            cout<<"average = "<<second_grid[i][2]<<"  ";
 
        
        cout<<endl;
    }
            }

            // cout<<"max " <<max<<" "<<"min is "<<min<<" "<<"sum "<<sum;
            cout<<endl;
     
    }
 
    }
 
    return 0;
}




        