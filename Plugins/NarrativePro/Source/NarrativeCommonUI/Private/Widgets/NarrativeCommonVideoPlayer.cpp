// Copyright Narrative Tools 2024. 


#include "Widgets/NarrativeCommonVideoPlayer.h"

void UNarrativeCommonVideoPlayer::BPSetVideo(UMediaSource* NewVideo)
{
	SetVideo(NewVideo);
}

void UNarrativeCommonVideoPlayer::BPPlayFromStart()
{
	PlayFromStart();
}

void UNarrativeCommonVideoPlayer::BPPlay()
{
	Play();
}

void UNarrativeCommonVideoPlayer::BPClose()
{
	Close();
}
