printf "Enter Principal Amount (P): "
read principal;

printf "Enter Rate of Interest (R): "
read rate;

printf "Enter Time in Years (T): "
read time;

simple_interest=$(awk "BEGIN {printf \"%.2f\", $principal * $rate * $time / 100}")

echo "Simple Interest: $simple_interest"

