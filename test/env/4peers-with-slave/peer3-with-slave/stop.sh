#!/bin/sh

DIR="$( cd "$( dirname "$0"  )" && pwd  )"

#need to kill -15 because of issue not resolved
ps -ef | grep 4peers-with-slave/peer3-with-slave | cut -c 9-15|xargs kill -15