printf "Enter 1st Number: ";
read a;
printf "Enter 2nd Number: ";
read b;
printf "Enter 3rd Number: ";
read c;

if [ $a -gt $b ]; then
    if [ $a -gt $c ]; then
        echo "A is Max";
    else    
        echo "C is Max";
    fi
else
    if [ $b -gt $c ]; then
        echo "B is Max";
    else
        echo "C is Max";
    fi
fi

read "Enter 1st Number: ";
echo a;
read "Enter 2nd Number: ";
echo b;
read "Enter 3rd Number: ";
echo c;

if [ $a -gt $b ]; then
    if [ $a -gt $c ]; then
    echo "A is Max";
    else 
    echo "C is Max";
    fi
else
    if [ $b -gt $c]; then
    echo "B is Max";
    else
    echo "C is Max";
    fi
fi