// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MovieSceneCore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieSceneCore.RuntimeMovieScenePlayer.Play
// ()

void URuntimeMovieScenePlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCore.RuntimeMovieScenePlayer.Play");

	URuntimeMovieScenePlayer_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCore.RuntimeMovieScenePlayer.Pause
// ()

void URuntimeMovieScenePlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCore.RuntimeMovieScenePlayer.Pause");

	URuntimeMovieScenePlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCore.RuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer
// ()
// Parameters:
// class ULevel*                  Level                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneBindings*     InMovieSceneBindings           (Parm, ZeroConstructor, IsPlainOldData)
// class URuntimeMovieScenePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URuntimeMovieScenePlayer* URuntimeMovieScenePlayer::CreateRuntimeMovieScenePlayer(class ULevel* Level, class UMovieSceneBindings* InMovieSceneBindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCore.RuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer");

	URuntimeMovieScenePlayer_CreateRuntimeMovieScenePlayer_Params params;
	params.Level = Level;
	params.InMovieSceneBindings = InMovieSceneBindings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
