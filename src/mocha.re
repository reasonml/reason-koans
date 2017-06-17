external describe : string => (unit => unit) => unit = "describe" [@@bs.val] [@@bs.module "mocha"];

external it : string => (unit => unit) => unit = "it" [@@bs.val] [@@bs.module "mocha"];

external only : string => (unit => unit) => unit = "it.only" [@@bs.val];

external ok : 'a => unit = "ok" [@@bs.val] [@@bs.module "assert"];

external eq : 'a => 'a => unit = "equal" [@@bs.val] [@@bs.module "assert"];

external neq : 'a => 'a => unit = "notEqual" [@@bs.val] [@@bs.module "assert"];

external deq : 'a => 'a => unit = "deepEqual" [@@bs.val] [@@bs.module "assert"];

external dneq : 'a => 'a => unit = "notDeepEqual" [@@bs.val] [@@bs.module "assert"];
