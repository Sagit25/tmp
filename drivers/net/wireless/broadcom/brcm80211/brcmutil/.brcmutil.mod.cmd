cmd_drivers/net/wireless/broadcom/brcm80211/brcmutil/brcmutil.mod := printf '%s\n'   utils.o d11.o | awk '!x[$$0]++ { print("drivers/net/wireless/broadcom/brcm80211/brcmutil/"$$0) }' > drivers/net/wireless/broadcom/brcm80211/brcmutil/brcmutil.mod