cmd_arch/arm/crypto/poly1305-core.o := arm-linux-gnueabihf-gcc -Wp,-MMD,arch/arm/crypto/.poly1305-core.o.d -nostdinc -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -mtp=cp15 -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -U__LINUX_ARM_ARCH__ -D__LINUX_ARM_ARCH__=7  -DMODULE  -c -o arch/arm/crypto/poly1305-core.o arch/arm/crypto/poly1305-core.S 

source_arch/arm/crypto/poly1305-core.o := arch/arm/crypto/poly1305-core.S

deps_arch/arm/crypto/poly1305-core.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/CPU_V7M) \
    $(wildcard include/config/THUMB2_KERNEL) \

arch/arm/crypto/poly1305-core.o: $(deps_arch/arm/crypto/poly1305-core.o)

$(deps_arch/arm/crypto/poly1305-core.o):
