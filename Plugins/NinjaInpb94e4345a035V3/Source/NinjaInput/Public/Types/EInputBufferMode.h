// Ninja Bear Studio Inc., all rights reserved.
#pragma once

UENUM(BlueprintType)
enum class EInputBufferMode : uint8
{
    /** The Input Buffer is disabled and cannot be opened. */
    Disabled,

    /** The Input Buffer is enabled and will store the first command received. */
    FirstCommand,

    /** The Input Buffer is disabled and will execute the last command received before it's closed. */
    LastCommand
};