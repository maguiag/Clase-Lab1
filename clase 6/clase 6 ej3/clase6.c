int esEntero(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
          {
            return 0;
            break;
          }
       i++;
   }
   return 1;
}
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
          {
            return 0;
            break;
          }
       i++;
   }
   return 1;
}
