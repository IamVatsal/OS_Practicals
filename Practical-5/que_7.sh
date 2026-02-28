max_size=-1
for i in *
do
size=$(stat -c%s "$i")
if [ $size -gt $max_size ]
then
        max_size=$size
fi
done

echo "$(ls -l | grep $max_size | awk '{ print $9}') is Largest With Size: $max_size"