open Helpers;

let koans _ =>
  Mocha.describe "Logical Operators" @@ (
    fun _ => {
      Mocha.it "not negates a boolean" @@ (fun _ => not (todo ()) |> Mocha.eq false);
      Mocha.it "&& is a logical AND" @@ (fun _ => (true && todo ()) |> Mocha.ok);
      Mocha.it "|| is a logical OR" @@ (fun _ => (false || todo ()) |> Mocha.ok)
    }
  );
