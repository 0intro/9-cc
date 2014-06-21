#!/bin/bash

wd=$(dirname $0)
wd=$(cd $wd; pwd)
rd=$(dirname $wd)

for os in $(cat ${wd}/os.dlist ); do for arch in $(ls ${rd}/${os}); do echo $os/$arch; done; done

