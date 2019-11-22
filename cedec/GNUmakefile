MAKEFLAGS += --no-print-directory
subdirs := 2015
.PHONY: all clean $(subdirs)
all: $(subdirs)
clean: $(subdirs)
$(subdirs):
	$(MAKE) -C $@ $(MAKECMDGOALS)
