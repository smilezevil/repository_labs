#ifndef MEDIA_ITEM_H
#define MEDIA_ITEM_H
#include <string>
class MediaItem {
protected:
    std::string title;
    int year;
public:
    MediaItem(const std::string& title, int year);
    virtual void print() const = 0;
    virtual ~MediaItem() = default;
};
#endif