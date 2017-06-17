open Helpers;

open Containers;

let charSort a b => {
  let lt = Char.code a < Char.code b;
  let eq = Char.code a == Char.code b;
  if lt {
    (-1)
  } else if eq {
    0
  } else {
    1
  }
};

let koans _ =>
  Mocha.describe "Lists" @@ (
    fun _ => {
      Mocha.it "list literals are denoted by brackets" @@ (fun _ => todo () |> Mocha.eq [1, 2, 3]);
      Mocha.it "length gives the length of a list" @@ (
        fun _ => todo () |> Mocha.eq (List.length [1, 2, 3])
      );
      Mocha.it "isEmpty determines if a list is empty" @@ (
        fun _ => todo () |> Mocha.eq (List.is_empty [])
      );
      Mocha.it "exists determines if a list is empty" @@ (
        fun _ => Mocha.ok @@ List.exists (fun _ => todo ()) [1, 2, 3]
      );
      Mocha.it "head_opt returns an optional containing the first item in a list" @@ (
        fun _ => Some (todo ()) |> Mocha.eq (List.head_opt [1, 2, 3])
      );
      Mocha.it "head_opt returns None if the list is empty" @@ (
        fun _ => Some (todo ()) |> Mocha.eq (List.head_opt [])
      );
      Mocha.it "take returns the first n items in a list" @@ (
        fun _ => todo () |> Mocha.eq (List.take 2 [1, 2, 3])
      );
      Mocha.it "drop returns the list without the first n items" @@ (
        fun _ => todo () |> Mocha.eq (List.drop 2 [1, 2, 3])
      );
      Mocha.it "filter returns the elements that return true for a predicate function" @@ (
        fun _ => todo () |> Mocha.eq (List.filter (fun x => x mod 2 == 0) [1, 2, 3, 4])
      );
      Mocha.it "all tests whether all elements of a list return true for a predicate function" @@ (
        fun _ => todo () |> Mocha.eq (List.for_all (fun x => x mod 2 == 0) [2, 4])
      );
      Mocha.it "repeat returns a list with n copies of a value" @@ (
        fun _ => todo () |> Mocha.eq (List.repeat 4 [1])
      );
      Mocha.it "sort sorts a list with a custom function" @@ (
        fun _ => todo () |> Mocha.eq (List.sort charSort ['c', 'a', 'b'])
      );
      Mocha.it "but you can just pass sort the Pervasives.compare function" @@ (
        fun _ => todo () |> Mocha.eq (List.sort compare ['c', 'a', 'b'])
      );
      Mocha.it "[x, ...list] prepends the list with x" @@ (fun _ => todo () |> Mocha.eq [1, 2, 3]);
      Mocha.it "List.cons is the cons operator" @@ (
        fun _ => todo () |> Mocha.eq (List.cons 1 [2, 3])
      );
      Mocha.it "append puts 2 lists together" @@ (
        fun _ => todo () |> Mocha.eq (List.append [1, 2] [3, 4])
      );
      Mocha.it "concat appends the elements in a list of lists" @@ (
        fun _ => todo () |> Mocha.eq (List.concat [[1, 2], [3, 4]])
      );
      Mocha.it "map applies a function to every element of a list" @@ (
        fun _ => todo () |> Mocha.eq (List.map (fun x => 2 * x) [1, 2, 3])
      );
      Mocha.it "map2 applies a function to elements from 2 lists" @@ (
        fun _ => todo () |> Mocha.eq (List.map2 (fun x y => x * y) [1, 2, 3] [4, 5, 6])
      );
      Mocha.it "fold_left reduces a list from the left" @@ (
        fun _ => todo () |> Mocha.eq (List.fold_left (fun x y => [y, ...x]) ["a"] ["b", "c", "d"])
      );
      Mocha.it "fold_right reduces a list from the right" @@ (
        fun _ => todo () |> Mocha.eq (List.fold_right (fun x y => [x, ...y]) ["b", "c", "d"] ["a"])
      )
    }
  );
