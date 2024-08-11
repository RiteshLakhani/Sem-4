printf "Enter side length of the Square: "
read side;

area=$(awk "BEGIN {printf \"%.2f\", $side * $side}")
echo "Area of the Square: $area"
