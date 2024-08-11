printf "Enter 1st Number: "
read a
printf "Enter 2nd Number: "
read b
printf "Enter 3rd Number: "
read c
printf "Enter 4th Number: "
read d

if [ $a -gt $b ]; then
    if [ $a -gt $c ]; then
        if [ $a -gt $d ]; then
            echo "A is max"
        else
            echo "D is max"
        fi
    else
        if [ $c -gt $d ]; then
            echo "C is max"
        else
            echo "D is max"
        fi
    fi
else
    if [ $b -gt $c ]; then
        if [ $b -gt $d ]; then
            echo "B is max"
        else
            echo "D is max"
        fi
    else
        if [ $c -gt $d ]; then
            echo "C is max"
        else
            echo "D is max"
        fi
    fi
fi


if [ $a -gt $b ]; then
    if [ $a -gt $c]; then
        if [ $a -gt $d ]; then
        echo " A is max";
        else
        echo "D is max";
        fi
    else
        if [ $c -gt $d ]; then
        echo " C is max";
        else
        echo "D is max";
        fi
else
    if [$b -gt $c];then
        if[$b -gt $d]; then
            echo "B is Max";
        else
            echo "D is MAX";
        fi
    else
        if[$c -gt $d];then
            echo "C is max";
        else
            echo "D is max";
        fi
fi