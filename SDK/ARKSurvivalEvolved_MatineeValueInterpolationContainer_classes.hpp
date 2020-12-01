#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MatineeValueInterpolationContainer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatineeValueInterpolationContainer.MatineeValueInterpolationContainer_C
// 0x0010 (0x0460 - 0x0450)
class AMatineeValueInterpolationContainer_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MatineePosition;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnderwaterFogMult;                                        // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MatineeValueInterpolationContainer.MatineeValueInterpolationContainer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MatineeValueInterpolationContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
