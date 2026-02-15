echo "Enter Basic Salery: "
read sal
if [ $sal -lt 10000 ]
then
    hra=`expr $sal \* 20 / 100`
    hra_r=20
elif [ $sal -lt 20000 ]
then
    hra=`expr $sal \* 25 / 100`
    hra_r=25
else
then
    hra=`expr $sal \* 30 / 100`
    hra_r=30
fi

echo "Sal: $sal"
echo "HRA Rate: $hra_r %"
echo "HRA: $hra"