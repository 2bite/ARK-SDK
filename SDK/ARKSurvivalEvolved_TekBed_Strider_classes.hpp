#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBed_Strider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekBed_Strider.TekBed_Strider_C
// 0x0018 (0x0F80 - 0x0F68)
class ATekBed_Strider_C : public ATekBed_C
{
public:
	class USphereComponent*                            Sphere1;                                                  // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BedSpawnTraceCheckHeight;                                 // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BedSpawnTraceExtend;                                      // 0x0F74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekBed_Strider.TekBed_Strider_C");
		return ptr;
	}


	void BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber);
	void ReceiveBeginPlay();
	bool BPAllowSeating(class AShooterPlayerController** ForPC);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ExecuteUbergraph_TekBed_Strider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
