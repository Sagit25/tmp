cmd_drivers/base/regmap/regmap-i2c.mod := printf '%s\n'   regmap-i2c.o | awk '!x[$$0]++ { print("drivers/base/regmap/"$$0) }' > drivers/base/regmap/regmap-i2c.mod
