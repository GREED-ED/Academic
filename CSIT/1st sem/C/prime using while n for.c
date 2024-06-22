int num,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
         count++;
            break;
        }
    }
   if(count==0 && num!= 1)
        printf("%d is a prime number",num);
   else
      printf("%d is not a prime number",num);
      
      
      
      
      
      int num,i,count,min,max;

printf("Enter min range: ");
    scanf("%d",&min);

    printf("Enter max range: ");
    scanf("%d",&max);

    num = min;
    while(num<=max){

         count = 0;
         i=2;

         while(i<=num/2){
             if(num%i==0){
                 count++;
                 break;
             }
             i++;
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);

         num++;
    }
  
