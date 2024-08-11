printf "Enter Width of the Rectangle: "
read w

printf "Enter Height of the Rectangle: "
read r

echo "Radius of the Circle: $(awk "BEGIN {printf \"%.2f\",$w*$r}")"