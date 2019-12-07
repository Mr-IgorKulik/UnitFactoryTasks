flag=$1
tar_name=$2
shift
shift
if [ "$flag" = "-e" ]
then
tar -x -f $tar_name 
elif [ "$flag" = "-c" ]
then
tar -c -f $tar_name $*
fi

