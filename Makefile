build:
	docker build -t study-lc .
run:
	docker run -it -v ${PWD}/workspace:/workspace study-lc
