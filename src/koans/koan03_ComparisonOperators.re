open Helpers;

let koans _ =>
  Mocha.describe
    "Comparison Operators"
    (
      fun _ => {
        Mocha.it "== tests for equality" @@ (fun _ => 1 == todo () |> Mocha.ok);
        Mocha.it "!= tests for inequality" @@ (fun _ => 1 != todo () |> Mocha.ok);
        Mocha.it "< tests for less than" @@ (fun _ => 1 < todo () |> Mocha.ok);
        Mocha.it "> tests for greater than" @@ (fun _ => 2 > todo () |> Mocha.ok);
        Mocha.it "<= tests for less than or equal" @@ (fun _ => 1 <= todo () |> Mocha.ok);
        Mocha.it ">= tests for greater than or equal" @@ (fun _ => 2 >= todo () |> Mocha.ok);
        Mocha.it "floats are comparable" @@ (fun _ => 1.0 < todo () |> Mocha.ok);
        Mocha.it "strings are comparable" @@ (fun _ => "1" == todo () |> Mocha.ok);
        Mocha.it "chars are comparable" @@ (fun _ => '1' == todo () |> Mocha.ok);
        Mocha.it "max returns the max of two args" @@ (fun _ => max 1 2 |> Mocha.eq (todo ()));
        Mocha.it "min returns the min of two args" @@ (fun _ => min 1 2 |> Mocha.eq (todo ()));
        Mocha.it "compare returns -1 for LT, 0 for EQ and 1 for GT" @@ (
          fun _ => compare 1 2 |> Mocha.eq (todo ())
        )
      }
    );
