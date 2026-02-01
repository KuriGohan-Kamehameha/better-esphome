#pragma once

#include "esphome/components/media_player/media_player.h"

namespace esphome {
namespace media_player {

#ifndef MEDIA_PLAYER_COMMAND_REPEAT_ALL
static constexpr MediaPlayerCommand MEDIA_PLAYER_COMMAND_REPEAT_ALL = MEDIA_PLAYER_COMMAND_REPEAT_ONE;
#endif

#ifndef MEDIA_PLAYER_COMMAND_NEXT
static constexpr MediaPlayerCommand MEDIA_PLAYER_COMMAND_NEXT = MEDIA_PLAYER_COMMAND_MEDIA_NEXT;
#endif

#ifndef MEDIA_PLAYER_COMMAND_PREVIOUS
static constexpr MediaPlayerCommand MEDIA_PLAYER_COMMAND_PREVIOUS = MEDIA_PLAYER_COMMAND_MEDIA_PREVIOUS;
#endif

#ifndef MEDIA_PLAYER_COMMAND_SHUFFLE
static constexpr MediaPlayerCommand MEDIA_PLAYER_COMMAND_SHUFFLE = MEDIA_PLAYER_COMMAND_TOGGLE;
#endif

#ifndef MEDIA_PLAYER_COMMAND_UNSHUFFLE
static constexpr MediaPlayerCommand MEDIA_PLAYER_COMMAND_UNSHUFFLE = MEDIA_PLAYER_COMMAND_UNMUTE;
#endif

#ifndef MEDIA_PLAYER_COMMAND_GROUP_JOIN
static constexpr MediaPlayerCommand MEDIA_PLAYER_COMMAND_GROUP_JOIN = MEDIA_PLAYER_COMMAND_PLAY;
#endif

}  // namespace media_player
}  // namespace esphome
