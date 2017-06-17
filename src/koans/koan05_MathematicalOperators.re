open Helpers;

let koans _ =>
  Mocha.describe "Mathematical Operators" @@ (
    fun _ => {
      Mocha.it "abs gives the absolute value of a number" @@ (fun _ => abs (todo ()) |> Mocha.eq 3);
      Mocha.it "sqrt gives the square root of a Float" @@ (fun _ => sqrt (todo ()) |> Mocha.eq 3.0);
      Mocha.it "+ adds numbers" @@ (fun _ => 1 + todo () |> Mocha.eq 3);
      Mocha.it "- subtracts numbers" @@ (fun _ => 7 - todo () |> Mocha.eq 3);
      Mocha.it "* multiplies numbers" @@ (fun _ => 4 * todo () |> Mocha.eq 24);
      Mocha.it "/. divides Floats" @@ (fun _ => 5.0 /. todo () |> Mocha.eq 2.5);
      Mocha.it "/ divides Ints" @@ (fun _ => 5 / todo () |> Mocha.eq 2);
      Mocha.it "mod performs modular arithmetic" @@ (fun _ => todo () |> Mocha.eq (13 mod 5))
    }
  );
