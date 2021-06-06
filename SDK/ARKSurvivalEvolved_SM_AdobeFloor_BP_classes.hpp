#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeFloor_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeFloor_BP.SM_AdobeFloor_BP_C
// 0x0008 (0x0B00 - 0x0AF8)
class ASM_AdobeFloor_BP_C : public AFloor_Metal_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeFloor_BP.SM_AdobeFloor_BP_C");
		return ptr;
	}


	void BPOnVariantSwitch(int* NewVariantIndex);
	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeFloor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
