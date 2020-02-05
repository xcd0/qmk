BIN=./helix_show

KEYMAP=yj
INPUT_JSON=./${KEYMAP}/${KEYMAP}.json
CREATED_HEADER=./${KEYMAP}/${KEYMAP}.h
RENAMED_HEADER=./${KEYMAP}/5.h

run:
	${BIN} ${INPUT_JSON}
	mv ${CREATED_HEADER} ${RENAMED_HEADER}

all:
	make run
	bash qmk_auto.sh ${KEYMAP}

build: run
	bash qmk_build.sh ${KEYMAP}

write:
	bash qmk_write.sh ${KEYMAP}

