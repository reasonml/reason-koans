open Helpers;

open Containers;

let koans _ =>
  Mocha.describe "Result" @@ (
    fun _ => {
      Mocha.it "results represent the result of a function" @@ (
        fun _ => Result.Ok (todo ()) |> (==) (Result.Ok 42) |> Mocha.ok
      );
      Mocha.it "but could be an error" @@ (
        fun _ => Result.Error (todo ()) |> (==) (Result.Error "there was an error") |> Mocha.ok
      );
      Mocha.it "a result can be converted to a maybe" @@ (
        fun _ => Some (todo ()) |> (==) (Result.toOption (Result.Ok 42)) |> Mocha.ok
      );
      Mocha.it "but an error will become nothing" @@ (
        fun _ => todo () |> (==) (Result.toOption (Result.Error "error")) |> Mocha.ok
      );
      Mocha.it "a maybe can also be converted to a result" @@ (
        fun _ => Result.Ok (todo ()) |> (==) (Result.fromOption (Some 42)) |> Mocha.ok
      );
      Mocha.it "and will become an error if there is nothing" @@ (
        fun _ => Result.Error () |> (==) (Result.fromOption None) |> Mocha.ok
      )
    }
  );
