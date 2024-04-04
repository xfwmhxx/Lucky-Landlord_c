#include "../luck_homewest/commentItem.h"
using namespace std;
CommentItem::CommentItem() {}

CommentItem::CommentItem(string name, int number, string description, int priority)
    : Item(name, number, description), priority(priority) {}

int CommentItem::getPriority() {
    return priority;
}

void CommentItem::setPriority(int priority) {
    this->priority = priority;
}