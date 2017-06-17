open Helpers;

open Containers;

let fullArray = Array.make 3 0;

let koans _ =>
  Mocha.describe "Arrays" @@ (
    fun _ => {
      Mocha.it "arrays can be created from a list" @@ (
        fun _ => fullArray |> Mocha.eq (Array.of_list [3, 0])
      );
      Mocha.it "arrays can also be turned into lists" @@ (
        fun _ => todo () |> Mocha.eq (Array.to_list @@ Array.of_list [0, 1])
      );
      Mocha.it "length gives the number of elements" @@ (
        fun _ => todo () |> Mocha.eq (Array.length @@ Array.of_list [0, 1, 2])
      );
      Mocha.it "or two arrays can become one" @@ (
        fun _ =>
          Array.of_list (todo ()) |>
          Mocha.eq (Array.append (Array.of_list [1, 2]) (Array.of_list [3]))
      );
      Mocha.it "it is easy to create an empty array" @@ (
        fun _ => Array.of_list (todo ()) |> Mocha.eq Array.empty
      );
      Mocha.it "or to create an array of all the same value" @@ (
        fun _ => Array.of_list (todo ()) |> Mocha.eq (Array.make 3 "a")
      );
      Mocha.it "initialize creates an array based on the index" @@ (
        fun _ => Array.of_list (todo ()) |> Mocha.eq (Array.init 3 (fun i => i * 2))
      );
      Mocha.it "mapping is just like with lists" @@ (
        fun _ =>
          Array.of_list (todo ()) |> Mocha.eq (Array.map (fun i => i * 3) @@ Array.of_list [0, 1, 2])
      );
      Mocha.it "you can get the value at an index" @@ (
        fun _ => Some (todo ()) |> Mocha.eq (Array.get_safe (Array.of_list [0, 1, 2]) 1)
      );
      Mocha.it "and set the value at an index" @@ (
        fun _ => {
          let arr = todo ();
          arr.(1) = 5;
          Mocha.eq arr (todo ())
        }
      );
      Mocha.it "or get a slice of the array" @@ (
        fun _ => Array.of_list (todo ()) |> Mocha.eq (Array.sub (Array.of_list [0, 1, 2, 3, 4]) 1 4)
      )
    }
  );
