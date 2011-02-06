#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "deck.h"
#include "cursor.h"

#define KEY_SPACEBAR ' '

extern struct deck *deck;
extern struct cursor *cursor;

struct stack *cursor_stack(struct cursor *);
bool cursor_on_stack(struct cursor *, struct stack *);
bool cursor_on_invalid_spot(struct cursor *);
void handle_stock_event();
void handle_card_movement(struct cursor *);
void handle_keyboard_event();

#endif
