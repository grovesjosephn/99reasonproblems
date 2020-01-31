let tail_array =
  fun
  | [||] => None
  | a => Some(a[Array.length(a) - 1]);

let rec tail_list =
  fun
  | [] => None
  | [_, last] => Some(last)
  | [_, ...tail] => tail_list(tail);

let rec elem_at = (idx, l) =>
  switch (idx, l) {
  | (_, []) => None
  | (idx, _) when idx < (-1) => None
  | (idx, [head, ...tail]) when idx == 0 => Some(head)
  | (idx, [head, ...tail]) => elem_at(idx - 1, tail)
  };

let length = l => {
  let rec _length = (count, _list) =>
    switch (count, _list) {
    | (c, []) => c
    | (c, [h, ...t]) => _length(c + 1, t)
    };

  _length(0, l);
};

let reverse_list = l => List.fold_left((a, c) => [c, ...a], [], l);

let compare_lists = (f, l1, l2) =>
  List.fold_left2((a, e1, e2) => a ? f(e1, e2) : a, true, l1, l2);