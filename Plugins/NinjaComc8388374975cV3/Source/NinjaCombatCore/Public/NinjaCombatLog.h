// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"

NINJACOMBATCORE_API DECLARE_LOG_CATEGORY_EXTERN(LogNinjaCombat, Log, All);

/**
 * Creates appropriate messages for the Combat category.
 * 
 * @param Verbosity		Verbosity level of this message. See ELogVerbosity.
 * @param Message		Message string literal.
 */
#define COMBAT_LOG(Verbosity, Message) \
	UE_LOG(LogNinjaCombat, Verbosity, TEXT("%s: %s"), *(GetClass()->GetName() + "::" + __FUNCTION__), TEXT(Message));

/**
 * Creates appropriate messages for the Combat category, with format arguments.
 * 
 * @param Verbosity		Verbosity level of this message. See ELogVerbosity.
 * @param Format		Format string literal in the style of printf.
 * @param Args			Comma-separated arguments used to format the message.
 */
#define COMBAT_LOG_ARGS(Verbosity, Format, ...) \
	UE_LOG(LogNinjaCombat, Verbosity, TEXT("%s: %s"), *(GetClass()->GetName() + "::" + __FUNCTION__), *FString::Printf(TEXT(Format), ##__VA_ARGS__));
