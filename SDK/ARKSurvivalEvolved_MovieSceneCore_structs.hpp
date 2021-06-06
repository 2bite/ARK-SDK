#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCore.MovieScene.MovieSceneSpawnable
// 0x0048
struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0010(0x0028)
	class UClass*                                      GeneratedClass;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneCore.MovieScene.MovieScenePossessable
// 0x0040
struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0010(0x0028)
	class UClass*                                      PossessedObjectClass;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneCore.MovieScene.MovieSceneObjectBinding
// 0x0048
struct FMovieSceneObjectBinding
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       BindingName;                                              // 0x0010(0x0028)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneCore.MovieSceneBindings.MovieSceneBoundObject
// 0x0020
struct FMovieSceneBoundObject
{
	struct FGuid                                       PossessableGuid;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneCore.MovieScene.MovieSceneEditorData
// 0x0010
struct FMovieSceneEditorData
{
	TArray<class FString>                              CollapsedSequencerNodes;                                  // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
