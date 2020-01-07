// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MediaAssets_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaAssets.MediaPlayer.SupportsSeeking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	UMediaPlayer_SupportsSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	UMediaPlayer_SupportsScrubbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	UMediaPlayer_SupportsRate_Params params;
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetRate
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	UMediaPlayer_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetMute
// ()
// Parameters:
// bool                           bMute                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaPlayer::SetMute(bool bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetMute");

	UMediaPlayer_SetMute_Params params;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SetLooping
// ()
// Parameters:
// bool                           InLooping                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetLooping(bool InLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	UMediaPlayer_SetLooping_Params params;
	params.InLooping = InLooping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// ()
// Parameters:
// struct FTimespan               InTime                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Seek(const struct FTimespan& InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	UMediaPlayer_Seek_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Rewind()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	UMediaPlayer_Rewind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Play
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	UMediaPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	UMediaPlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// ()
// Parameters:
// class FString                  NewUrl                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenUrl(const class FString& NewUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	UMediaPlayer_OpenUrl_Params params;
	params.NewUrl = NewUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OnMediaPlayerMediaOpened__DelegateSignature
// ()
// Parameters:
// class FString                  OpenedUrl                      (Parm, ZeroConstructor)

void UMediaPlayer::OnMediaPlayerMediaOpened__DelegateSignature(const class FString& OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OnMediaPlayerMediaOpened__DelegateSignature");

	UMediaPlayer_OnMediaPlayerMediaOpened__DelegateSignature_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.OnMediaPlayerMediaClosed__DelegateSignature
// ()

void UMediaPlayer::OnMediaPlayerMediaClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OnMediaPlayerMediaClosed__DelegateSignature");

	UMediaPlayer_OnMediaPlayerMediaClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.IsStopped
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsStopped");

	UMediaPlayer_IsStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	UMediaPlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	UMediaPlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	UMediaPlayer_IsLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaPlayer::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	UMediaPlayer_GetUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// ()
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	UMediaPlayer_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	UMediaPlayer_GetRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetMute
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::GetMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMute");

	UMediaPlayer_GetMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// ()
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	UMediaPlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPlay
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlay");

	UMediaPlayer_CanPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	UMediaPlayer_CanPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundWave.SetMediaPlayer
// ()
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaSoundWave::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundWave.SetMediaPlayer");

	UMediaSoundWave_SetMediaPlayer_Params params;
	params.InMediaPlayer = InMediaPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaTexture.SetMediaPlayer
// ()
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaTexture::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	UMediaTexture_SetMediaPlayer_Params params;
	params.InMediaPlayer = InMediaPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
