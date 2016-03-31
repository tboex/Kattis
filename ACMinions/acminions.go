package main

import (
       "fmt"
       "io"
)

type Minion struct {
   low, high int
}

func main() {
   in, count, x, y := 0, 0, 0, 0
   fmt.Scanln(&in)
   count = in
   minion := Minion {low: 0, high: 0}
   arr := make([]Minion, in)
   for i := 0; i < in; i++ {
      _, err := fmt.Scanf( "%d%d", &x, &y )
      if err == io.EOF {
         break
      }
      minion.low = x
      minion.high = y
      arr[i] = minion
   }
   for i := 0; i < in; i++ {
      for j := i+1; j < in; j++ {
         if shareRange( arr[i], arr[j] ) == true {
            count--
            break
         }
      }
   }
   fmt.Printf("%d\n",count)
}

func shareRange( minion1, minion2 Minion ) bool {
   for i := minion1.low; i <= minion1.high; i++ {
      for j := minion2.low; j <= minion2.high; j++ {
         if i == j {
            return true
         }
      }
   }
   return false
}
