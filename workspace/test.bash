#!/bin/bash
try() {
  expected="$(cat $1)"
  lesson_code="$2"

  gcc -o tmp.${lesson_code} ${lesson_code}.c
  actual="$(./tmp.${lesson_code})"

  if [[ "${actual}" != "${expected}" ]]; then
    echo "${expected} expected, but got ${actual}"
    exit 1
  fi
}

cat <<EOF > tmp.expected.1-1
プログラミングは面白い

Programming is interesting.
EOF
try tmp.expected.1-1 lesson1-1

cat <<EOF > tmp.expected.2-1
 0 x  0 =   0
 1 x  1 =   1
 2 x  2 =   4
 3 x  3 =   9
 4 x  4 =  16
 5 x  5 =  25
 6 x  6 =  36
 7 x  7 =  49
 8 x  8 =  64
 9 x  9 =  81
10 x 10 = 100
EOF
try tmp.expected.2-1 lesson2-1

echo 10 > tmp.expected.2-2
try tmp.expected.2-2 lesson2-2

echo OK