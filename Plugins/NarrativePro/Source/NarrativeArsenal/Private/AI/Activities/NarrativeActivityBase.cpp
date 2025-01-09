// Copyright Narrative Tools 2024. 

#include "AI/Activities/NarrativeActivityBase.h"

UNarrativeActivityBase::UNarrativeActivityBase(const FObjectInitializer& ObjectInitializer)
{

}

bool UNarrativeActivityBase::CanRunActivity_Implementation(FString& FailReason) const
{
	return true;
}

FString UNarrativeActivityBase::DescribeActivity_Implementation() const
{
	return ActivityName.IsEmptyOrWhitespace() ? GetName() : ActivityName.ToString();
}

FText UNarrativeActivityBase::GetActivityName() const
{
	return ActivityName;
}

bool UNarrativeActivityBase::RunActivity()
{
	return false;
}

bool UNarrativeActivityBase::EndActivity()
{
	return false;
}
