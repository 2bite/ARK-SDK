#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MovieSceneCoreTypes_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCoreTypes.MovieScene3DTransformSection
// 0x03A8 (0x03E0 - 0x0038)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  Translation[0x3];                                         // 0x0038(0x0068)
	struct FRichCurve                                  Rotation[0x3];                                            // 0x0170(0x0068)
	struct FRichCurve                                  Scale[0x3];                                               // 0x02A8(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieScene3DTransformSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieScene3DTransformTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieScene3DTransformTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneAnimationSection
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneAnimationSection : public UMovieSceneSection
{
public:
	class UAnimSequence*                               AnimSequence;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimationStartTime;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimationDilationFactor;                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneAnimationSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneAnimationTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneAnimationTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneAnimationTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneAudioSection
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneAudioSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneAudioTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneAudioTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  AudioSections;                                            // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneAudioTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneBoolSection
// 0x0068 (0x00A0 - 0x0038)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              BoolCurve;                                                // 0x0038(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneBoolSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneBoolTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneBoolTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneColorSection
// 0x01A0 (0x01D8 - 0x0038)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0038(0x0068)
	struct FRichCurve                                  GreenCurve;                                               // 0x00A0(0x0068)
	struct FRichCurve                                  BlueCurve;                                                // 0x0108(0x0068)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0170(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneColorSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneColorTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneColorTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneDirectorTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneDirectorTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ShotSections;                                             // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneDirectorTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneFloatSection
// 0x0068 (0x00A0 - 0x0038)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  FloatCurve;                                               // 0x0038(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneFloatSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneFloatTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneFloatTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneParticleSection
// 0x0008 (0x0040 - 0x0038)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	TEnumAsByte<EParticleKey>                          KeyType;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneParticleSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneParticleTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneParticleTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ParticleSections;                                         // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneParticleTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneShotSection
// 0x0038 (0x0070 - 0x0038)
class UMovieSceneShotSection : public UMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                               // 0x0038(0x0010) (ZeroConstructor)
	struct FText                                       Title;                                                    // 0x0048(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneShotSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneVectorSection
// 0x01A8 (0x01E0 - 0x0038)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  Curves[0x4];                                              // 0x0038(0x0068)
	int                                                ChannelsUsed;                                             // 0x01D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneVectorSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.MovieSceneVectorTrack
// 0x0008 (0x0060 - 0x0058)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.MovieSceneVectorTrack");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.SubMovieSceneSection
// 0x0010 (0x0048 - 0x0038)
class USubMovieSceneSection : public UMovieSceneSection
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MovieSceneStartTime;                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MovieSceneTimeEndTime;                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.SubMovieSceneSection");
		return ptr;
	}

};


// Class MovieSceneCoreTypes.SubMovieSceneTrack
// 0x0010 (0x0038 - 0x0028)
class USubMovieSceneTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SubMovieSceneSections;                                    // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCoreTypes.SubMovieSceneTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
