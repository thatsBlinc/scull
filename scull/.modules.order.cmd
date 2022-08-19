cmd_/home/lgj/examples/scull/modules.order := {   echo /home/lgj/examples/scull/scull.ko; :; } | awk '!x[$$0]++' - > /home/lgj/examples/scull/modules.order
