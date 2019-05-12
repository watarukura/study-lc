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

echo OK