open Helpers;

open Containers;

let koans _ =>
  Mocha.describe "Strings" @@ (
    fun _ => {
      Mocha.it "length returns the string length" @@ (
        fun _ => todo () |> Mocha.eq (String.length "Hello")
      );
      Mocha.it "reverse returns the reverse of a string" @@ (
        fun _ => todo () |> Mocha.eq (String.rev "Hello")
      );
      Mocha.it "repeat returns the string repeated n times" @@ (
        fun _ => todo () |> Mocha.eq (String.repeat "ya" 2)
      );
      Mocha.it "the ^ infix function appends two strings" @@ (
        fun _ => todo () |> Mocha.eq ("Reason" ^ "ML")
      );
      Mocha.it "concat appends a list of strings together, interpolated with a separator" @@ (
        fun _ => todo () |> Mocha.eq (String.concat " " ["ReasonML", "Lang", "Yay!"])
      );
      Mocha.it "sub slices a substring (warning, the arguments must be in the bounds of the string)" @@ (
        fun _ => todo () |> Mocha.eq (String.sub "I'm a string" 0 2)
      );
      Mocha.it "left takes the first n characters of a string" @@ (
        fun _ => todo () |> Mocha.eq (String.take 3 "I'm a string")
      );
      Mocha.it "dropLeft drops the first n characters of a string" @@ (
        fun _ => todo () |> Mocha.eq (String.drop 3 "I'm a string")
      );
      Mocha.it "find looks for a substring, returning the index of it's place, or -1" @@ (
        fun _ => todo () |> Mocha.eq (String.find start::0 sub::"string" "I'm a string")
      )
    }
  );
