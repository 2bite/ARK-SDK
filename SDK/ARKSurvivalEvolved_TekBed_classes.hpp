#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekBed.TekBed_C
// 0x0018 (0x0F68 - 0x0F50)
class ATekBed_C : public ABedBaseBP_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  OpenedSound;                                              // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ClosedSound;                                              // 0x0F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekBed.TekBed_C");
		return ptr;
	}


	void BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber);
	bool BPAllowSeating(class AShooterPlayerController** ForPC);
	void BPSeatedPlayer(class AShooterCharacter** SeatedChar, int* AtSeatNumber);
	void UserConstructionScript();
	void ExecuteUbergraph_TekBed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
