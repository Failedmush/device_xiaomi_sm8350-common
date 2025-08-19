#include <media/AudioSystem.h>
#include <AudioPolicyInterface.h>

using namespace android;

extern "C" {

status_t _ZN7android11AudioSystem24setDeviceConnectionStateE24audio_policy_dev_state_tRKNS_5media5audio6common9AudioPortE14audio_format_t(
    audio_policy_dev_state_t state,
    const android::media::audio::common::AudioPort& port,
    audio_format_t encodedFormat) {
    
    // Call the newer AudioSystem::setDeviceConnectionState with deviceSwitch bool
    return AudioSystem::setDeviceConnectionState(state, port, encodedFormat, false);
}

}
