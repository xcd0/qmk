
BIN=./helix_show
KEYBOARD=helix
KEYMAP=yj

BIN=cat
KEYBOARD=flag
KEYMAP=flag

CREATED_HEADER=./${KEYMAP}/${KEYMAP}.h
RENAMED_HEADER=./${KEYMAP}/5.h

run:
	
	${BIN} ./${KEYMAP}/${KEYMAP}.json
	mv ${CREATED_HEADER} ${RENAMED_HEADER}

all:
	make run
	bash qmk_copy.sh
	bash qmk_auto.sh ${KEYBOARD} ${KEYMAP}

build:
	bash qmk_copy.sh
	bash qmk_build.sh ${KEYBOARD} ${KEYMAP}

write:
	bash qmk_copy.sh
	bash qmk_write.sh ${KEYBOARD} ${KEYMAP}

