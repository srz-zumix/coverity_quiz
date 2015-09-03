MAKEFLAGS += --no-print-directory
subdirs := cedec_coverity
.PHONY: all clean $(subdirs)
all: $(subdirs)
clean: $(subdirs)
$(subdirs):
	$(MAKE) -C $@ $(MAKECMDGOALS)
