let tail_array: array('a) => option('a);
let tail_list: list('a) => option('a);
let elem_at: (int, list('a)) => option('a);
let length: list('a) => int;
let reverse_list: list('a) => list('a);
let compare_lists: (('a, 'a) => bool, list('a), list('a)) => bool;