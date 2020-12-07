#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_ShapeShifter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjRock_ShapeShifter.ProjRock_ShapeShifter_C
// 0x000C (0x0694 - 0x0688)
class AProjRock_ShapeShifter_C : public APrimalProjectileArrow
{
public:
	struct FVector                                     ExtraVelocity;                                            // 0x0688(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjRock_ShapeShifter.ProjRock_ShapeShifter_C");
		return ptr;
	}


	void BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_ProjRock_ShapeShifter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
