package main

import "fmt"

func main() {
   var amount, time, count, sum, temp int
   fmt.Scanln( &amount, &time )
   arr := make([]int, amount)

   for i := 0; i < amount; i++ {
      fmt.Scanf( "%d", &temp )
      arr[i] = temp
   }//Established Time in Array
   for i := 0; i < amount; i++ {
      if (sum + arr[i]) < time {
         sum += arr[i]
         count++
      }else {
         break
      }
   }
   /*fmt.Printf("Amount: %d\nTime: %d\nSize: %d\n",amount, time, len(arr))
   for i := 0; i < len(arr); i++ {
      fmt.Printf("Arr[%d]: %d\n",i, arr[i])
   }*/
   fmt.Println(count,"\n")
}
