echo "Enter the length of side 1: " 
read side1
echo "Enter the length of side 2: " 
read side2
echo "Enter the length of side 3: " 
read side3

if [ $side1 -eq $side2 ] && [ $side2 -eq $side3 ]; then
    echo "Equilateral triangle"
elif [ $side1 -eq $side2 ] || [ $side2 -eq $side3 ] || [ $side1 -eq $side3 ]; then
    echo "Isosceles triangle"
else
    echo "Scalene triangle"
fi