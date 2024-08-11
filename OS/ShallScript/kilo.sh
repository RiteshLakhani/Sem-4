echo "Enter Kilometer: "
read kilometer

meter=$((kilometer * 1000))
feet=$((kilometer * 3280))
inches=$((kilometer * 39370))
cm=$((kilometer * 100000))

echo "Meter: $meter"
echo "Feet: $feet"
echo "Inches: $inches"
echo "Centimeter: $cm"
