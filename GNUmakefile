MAKEFLAGS += --no-print-directory
subdirs := cedec
.PHONY: all clean $(subdirs)
all: $(subdirs)
clean: $(subdirs)
$(subdirs):
	$(MAKE) -C $@ $(MAKECMDGOALS)
