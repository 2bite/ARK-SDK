#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArctic_ShapeShifter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C
// 0x000C (0x0694 - 0x0688)
class AProjArctic_ShapeShifter_C : public APrimalProjectileArrow
{
public:
	struct FVector                                     ExtraVelocity;                                            // 0x0688(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C");
		return ptr;
	}


	void BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_ProjArctic_ShapeShifter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
