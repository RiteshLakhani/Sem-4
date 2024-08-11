printf "Enter Radius of the Circle: "
read r

echo "Radius of the Circle: $(awk "BEGIN {printf \"%.2f\",3.14*$r*$r}")"