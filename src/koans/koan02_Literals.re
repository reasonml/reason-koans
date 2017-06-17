open Helpers;

let koans _ =>
  Mocha.describe
    "Literals"
    (
      fun _ => {
        Mocha.it "strings are enclosed in double quotes" (fun _ => Mocha.eq "string" (todo ()));
        Mocha.it "characters are enclosed in single quotes" (fun _ => Mocha.eq 'a' (todo ()));
        Mocha.it "floats have a decimal" (fun _ => Mocha.eq 1.0 (todo ()));
        Mocha.it "integers do not" (fun _ => Mocha.eq 1 (todo ()));
        Mocha.it "floats can be negative" (fun _ => Mocha.eq (-1.0) (todo ()));
        Mocha.it "integers can be negative" (fun _ => Mocha.eq (-1) (todo ()))
      }
    );
