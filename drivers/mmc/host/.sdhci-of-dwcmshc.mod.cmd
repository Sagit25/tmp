cmd_drivers/mmc/host/sdhci-of-dwcmshc.mod := printf '%s\n'   sdhci-of-dwcmshc.o | awk '!x[$$0]++ { print("drivers/mmc/host/"$$0) }' > drivers/mmc/host/sdhci-of-dwcmshc.mod
