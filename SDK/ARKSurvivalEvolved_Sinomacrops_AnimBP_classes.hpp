#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Sinomacrops_AnimBP.Sinomacrops_AnimBP_C
// 0x0023 (0x1C6C - 0x1C49)
class USinomacrops_AnimBP_C : public UDinoBlueprintBase_RootTransform_Glider_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x1C49(0x0003) MISSED OFFSET
	float                                              MinZVelForMountUp;                                        // 0x1C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastMountedCharRot;                                       // 0x1C50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1C5C(0x0004) MISSED OFFSET
	double                                             LastUpdateExAnimPlayRateTime;                             // 0x1C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExAnimPlayRate;                                        // 0x1C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sinomacrops_AnimBP.Sinomacrops_AnimBP_C");
		return ptr;
	}


	void UpdateAnimFromShooterChar(class AShooterCharacter** ShooterChar, float* DeltaTime, bool* HasBuffFromPawnOwner);
	void PassengerUpdateAnim(class APrimalDinoCharacter** CarryingDino, float* DeltaTime);
	void ExecuteUbergraph_Sinomacrops_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
