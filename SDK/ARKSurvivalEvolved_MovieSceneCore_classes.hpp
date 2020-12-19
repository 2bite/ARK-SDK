#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MovieSceneCore_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCore.MovieScene
// 0x0040 (0x0068 - 0x0028)
class UMovieScene : public UObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneObjectBinding>            ObjectBindings;                                           // 0x0048(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x0058(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieScene");
		return ptr;
	}

};


// Class MovieSceneCore.MovieSceneBindings
// 0x0018 (0x0040 - 0x0028)
class UMovieSceneBindings : public UObject
{
public:
	class UMovieScene*                                 RootMovieScene;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneBoundObject>              BoundObjects;                                             // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneBindings");
		return ptr;
	}

};


// Class MovieSceneCore.MovieSceneSection
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSection : public UObject
{
public:
	float                                              StartTime;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneSection");
		return ptr;
	}

};


// Class MovieSceneCore.MovieSceneTrack
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrack : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieSceneCore.MovieScenePropertyTrack
// 0x0030 (0x0058 - 0x0028)
class UMovieScenePropertyTrack : public UMovieSceneTrack
{
public:
	struct FName                                       PropertyName;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      PropertyPath;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bSectionsAreShowable;                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieScenePropertyTrack");
		return ptr;
	}

};


// Class MovieSceneCore.RuntimeMovieScenePlayer
// 0x0090 (0x00B8 - 0x0028)
class URuntimeMovieScenePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UMovieSceneBindings*                         MovieSceneBindings;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             TimeCursorPosition;                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x67];                                      // 0x0051(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.RuntimeMovieScenePlayer");
		return ptr;
	}


	void Play();
	void Pause();
	class URuntimeMovieScenePlayer* CreateRuntimeMovieScenePlayer(class ULevel* Level, class UMovieSceneBindings* InMovieSceneBindings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
