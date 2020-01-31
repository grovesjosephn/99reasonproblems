Console.log("Running Test Program:");

let () =
  print_endline(
    string_of_bool(Lib.Util.compare_lists((==), [3, 4, 5], [2, 3, 5])),
  );