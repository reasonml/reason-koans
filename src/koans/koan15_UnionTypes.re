open Helpers;

type nucleotide =
  | A
  | C
  | G
  | T;

type dna =
  | Base nucleotide
  | Strand (list nucleotide);

let koans _ =>
  Mocha.describe "UnionTypes" @@ (
    fun _ => {
      Mocha.it "simple types are similar to enums in other languages" @@ (
        fun _ => todo () |> Mocha.eq C
      );
      Mocha.it "more complex types can be built with a 'tag' and additional data" @@ (
        fun _ => Base (todo ()) |> Mocha.eq (Base C)
      );
      Mocha.it "switch statements may be used to extract the data from the type" @@ (
        switch (Base A) {
        | Strand nucleotides => (fun _ => [todo ()] |> Mocha.eq nucleotides)
        | Base nucleotide => (fun _ => todo () |> Mocha.eq nucleotide)
        }
      )
    }
  );
