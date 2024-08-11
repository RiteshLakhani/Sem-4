echo "Enter Character :- "
read ch

if [[ $ch == [A-Z] ]]; then
    echo "Capital Letter"
elif [[ $ch == [a-z] ]]; then
    echo "Small Letter"
elif [[ $ch == [0-9] ]]; then
    echo "Digit"
else
    echo "Special Character"
fi
