package main

import "fmt"

func main(){
   in, count := 0, 0
   arr := make([]int,10)
   for i:= 0; i < 10; i++ {
   arr[i] = -1
   }
   for i:= 0; i < 10; i++ {
      fmt.Scanln(&in)
      count += Mod(in, i, arr)
   }
   fmt.Println(count)
}

func Mod(i, place int, arr []int) int {
   value, check := i%42, false
      for j := 0; j < len(arr); j++ {
         if value == arr[j] {
            check = true
         }
      }
      if check == false {
         arr[place] = value
         return 1
      }
   return 0
}
