#ifndef TV_H
#define TV_H

#include "NuppelVideoRecorder.h"
#include "NuppelVideoPlayer.h"
#include "RingBuffer.h"
#include "settings.h"

#include "channel.h"

class TV
{
 public:
    TV(void);
   ~TV(void);

    void LiveTV(void);

 private:
    void ChangeChannel(bool up);
    void ChangeChannel(char *name);
    
    void ChannelKey(int key);
    void ChannelCommit(void);
    
    NuppelVideoRecorder *nvr;
    NuppelVideoPlayer *nvp;

    RingBuffer *rbuffer;
    Channel *channel;

    Settings *settings;

    int osd_display_time;

    bool channelqueued;
    char channelKeys[4];
    int channelkeysstored;
};

#endif
