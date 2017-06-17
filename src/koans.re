open Mocha;

module type Koan = {let koans: unit => unit;};

let iterator ((module M): (module Koan)) => M.koans ();

describe
  "ReasonML bucklescript Koans"
  (
    fun _ =>
      List.iter
        iterator
        [
          (module Koan01_Expects),
          (module Koan02_Literals),
          (module Koan03_ComparisonOperators),
          (module Koan04_LogicalOperators),
          (module Koan05_MathematicalOperators),
          (module Koan06_NumberConversions),
          (module Koan07_Functions),
          (module Koan08_Option),
          (module Koan09_Lists),
          (module Koan10_Arrays),
          (module Koan11_Tuples),
          (module Koan12_Results),
          (module Koan13_Strings),
          (module Koan14_Records),
          (module Koan15_UnionTypes),
          (module Koan2x_Maps),
          (module Koan2x_Sets)
        ]
  );
