cmd_lib/modules.order := {   cat lib/math/modules.order;   cat lib/crypto/modules.order;   cat lib/zlib_inflate/modules.order;   cat lib/zlib_deflate/modules.order;   cat lib/reed_solomon/modules.order;   cat lib/lzo/modules.order;   cat lib/lz4/modules.order;   cat lib/zstd/modules.order;   cat lib/xz/modules.order;   cat lib/mpi/modules.order;   cat lib/dim/modules.order;   cat lib/fonts/modules.order;   echo lib/crc-ccitt.ko;   echo lib/crc7.ko;   echo lib/crc8.ko;   cat lib/raid6/modules.order;   echo lib/ts_kmp.ko;   echo lib/ts_bm.ko;   echo lib/ts_fsm.ko;   echo lib/lru_cache.ko; :; } > lib/modules.order