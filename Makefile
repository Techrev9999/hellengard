hellengard: 
	$(MAKE) -C src

test: 
	$(MAKE) -C src test

.PHONY: all $(SUBDIRS)
