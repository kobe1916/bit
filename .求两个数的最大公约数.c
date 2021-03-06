//1.1、求差法
对于传入的两个数，用较大的数减去较小的数，然后拿差与较小的数相比，若是相等，则这个数就是最大公约数。否则，对于差和较小的数再次重复上述的过程。
关于算法，则可利用while的循环来重复或者利用递归算法，这里采用递归来求解
int division(int n,int m)
  {
      if(n<m)
          division(m,n); //交换n，m的值
      else if(n==m)
          return n;
      else
      {
          int temp=n;
         n=m;
         m=temp-n;
         division(n,m); //重复上述过程
     }
 }  
 
 
 
 
 //2.2、求模法
求模法就是对于传入的两个数，用较大的数来对较小的数求模，要是模为零，则较大的数则为最大公约数。若是模不为零，则对于较小的数和模继续上述的过程。
此过程与上述的求差法几乎一模一样，仍利用递归法.

 int division(int n,int m)
  {
      if(n<m)
          division(m,n); //交换m与n
      else if(m==0)
          return n;
      else
      {
          int temp=n;
         n=m;
         m=temp%n;
         division(n,m); //重复上述过程
     }
 }      
