open Helpers;

let koans _ =>
  Mocha.describe "Tuples" @@ (
    fun _ => {
      Mocha.it "tuples are like lists of fixed length" @@ (fun _ => todo () |> Mocha.eq (1, 2));
      Mocha.it "tuples may also be of mixed types" @@ (fun _ => todo () |> Mocha.eq (1, "hey"));
      Mocha.it "first gets the first element of a 2-tuple" @@ (
        fun _ => todo () |> Mocha.eq (fst (1, 2))
      );
      Mocha.it "second gets the second element of a 2-tuple" @@ (
        fun _ => todo () |> Mocha.eq (snd (1, "foo"))
      )
    }
  );
