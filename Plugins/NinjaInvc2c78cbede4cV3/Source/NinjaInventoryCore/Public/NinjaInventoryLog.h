// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"

NINJAINVENTORYCORE_API DECLARE_LOG_CATEGORY_EXTERN(LogNinjaInventory, Log, All);

/**
 * Creates appropriate messages for the Inventory category.
 * Meant to be used by actual object instances with access to the GetClass method.
 * 
 * @param Verbosity		Verbosity level of this message. See ELogVerbosity.
 * @param Message		Message string literal.
 */
#define INVENTORY_LOG(Verbosity, Message) \
	UE_LOG(LogNinjaInventory, Verbosity, TEXT("%s: %s"), *(GetClass()->GetName() + "::" + __FUNCTION__), TEXT(Message));

/**
 * Creates appropriate messages for the Inventory category, with format arguments.
 * Meant to be used by actual object instances with access to the GetClass method.
 * 
 * @param Verbosity		Verbosity level of this message. See ELogVerbosity.
 * @param Format		Format string literal in the style of printf.
 * @param Args			Comma-separated arguments used to format the message.
 */
#define INVENTORY_LOG_ARGS(Verbosity, Format, ...) \
	UE_LOG(LogNinjaInventory, Verbosity, TEXT("%s: %s"), *(GetClass()->GetName() + "::" + __FUNCTION__), *FString::Printf(TEXT(Format), ##__VA_ARGS__));

/**
 * Creates appropriate messages for the Inventory category.
 * Meant to be in static contexts, with access to the StaticClass method.
 * 
 * @param Verbosity		Verbosity level of this message. See ELogVerbosity.
 * @param Message		Message string literal.
 */
#define INVENTORY_STATIC_LOG(Verbosity, Message) \
	UE_LOG(LogNinjaInventory, Verbosity, TEXT("%s: %s"), *(StaticClass()->GetName() + "::" + __FUNCTION__), TEXT(Message));

/**
 * Creates appropriate messages for the Inventory category, with format arguments.
 * Meant to be in static contexts, with access to the StaticClass method.
 * 
 * @param Verbosity		Verbosity level of this message. See ELogVerbosity.
 * @param Format		Format string literal in the style of printf.
 * @param Args			Comma-separated arguments used to format the message.
 */
#define INVENTORY_STATIC_LOG_ARGS(Verbosity, Format, ...) \
	UE_LOG(LogNinjaInventory, Verbosity, TEXT("%s: %s"), *(StaticClass()->GetName() + "::" + __FUNCTION__), *FString::Printf(TEXT(Format), ##__VA_ARGS__));
