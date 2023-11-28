#pragma once
typedef unsigned int uint32_t;

const uint32_t MAX_INPUT_ACTIONS = 256;
typedef struct UISystemInputActions
{
	typedef enum UISystemInputAction {
		UI_ACTION_START_ID_ = MAX_INPUT_ACTIONS - 64,
		
		UI_ACTION_KEY_TAB,
		UI_ACTION_KEY_LEFT_ARROW,
		UI_ACTION_KEY_RIGHT_ARROW,
		UI_ACTION_KEY_UP_ARROW,
		UI_ACTION_KEY_DOWN_ARROW,
		UI_ACTION_KEY_PAGE_UP,
		UI_ACTION_KEY_PAGE_DOWN,


	} UISystemInputAction;
} UISystemInputActions;