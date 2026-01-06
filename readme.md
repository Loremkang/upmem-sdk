# A mirror of the source code of UPMEM SDK

A mirror of upmem-2025.1.0-Linux-x86_64 with only one modification:
File `dpu_region_address_translation.h` has one line changed from `void *private;` to `void *privatedata` to pass C++ compilation. It seems that everything is alright.

## Prior versions

You can find prior versions: 2024.1.0, 2024.2.0 in prior commits.